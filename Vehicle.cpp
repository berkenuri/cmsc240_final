#ifndef _VEHICLE_CPP__
#define _VEHICLE_CPP__

#include "Vehicle.h"

Vehicle::Vehicle() {}

Vehicle::~Vehicle() {}

Vehicle::Vehicle(const Vehicle& other) {

    name = other.name;
    size = other.size;
    frontXPos = other.frontXPos;
    frontYPos = other.frontYPos;
    backXPos = other.backXPos;
    backYPos = other.backYPos;
    direction = other.direction;
}

Vehicle::Vehicle(VehicleType vehicleName, int vehicleSize, 
                int frontX, int frontY, 
                int backX, int backY, Direction moveDirection) {

    name = vehicleName;
    size = vehicleSize;
    frontXPos = frontX;
    frontYPos = frontY;
    backXPos = backX;
    backYPos = backY;
    direction = moveDirection;
}

VehicleType Vehicle::getName() {

    return name;
}

int Vehicle::getFrontXPos() {

    return frontXPos;
}

int Vehicle::getFrontYPos() {

    return frontYPos;
}

vector<int> Vehicle::getFrontPos() {

    vector<int> frontCoordinates;

    frontCoordinates.push_back(frontXPos);
    frontCoordinates.push_back(frontYPos);

    return frontCoordinates;
}

int Vehicle::getBackXPos() {

    return backXPos;
}

int Vehicle::getBackYPos() {

    return backYPos;
}

vector<int> Vehicle::getBackPos() {

    vector<int> backCoordinates;

    backCoordinates.push_back(backXPos);
    backCoordinates.push_back(backYPos);

    return backCoordinates;

}

void Vehicle::setFrontPos(int x, int y) {

    frontXPos = x;
    frontYPos = y;
}
   
void Vehicle::setBackPos(int x, int y) {

    backXPos = x;
    backYPos = y;
}
     
int Vehicle::getSize() {

    return size;
}
 
void Vehicle::go() {
    
    if (direction == Direction::north) {

        frontYPos += 1;
        backYPos += 1;
    }

    else if (direction == Direction::south) {

        frontYPos -= 1;
        backYPos -= 1;
    }

    else if (direction == Direction::west) {

        frontXPos -= 1;
        backXPos -= 1;
    }

    else {

        frontXPos += 1;
        backXPos += 1;
    }
}


#endif 
