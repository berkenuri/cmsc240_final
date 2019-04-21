#ifndef _TRAFFICLIGHT_H__
#define _TRAFFICLIGHT_H__

using namespace std;

enum class Color { GREEN, YELLOW, RED, DEFAULT };

enum class Direction { NORTH_SOUTH, EAST_WEST, DEFAULT };

class TrafficLight {

    public:

        // Default constructor 
        TrafficLight();
        // Creates an instance of TrafficLigth with pass by value arguments
        TrafficLight(int green, int yellow, int red, Color currentState, Direction direct);
        // Copy constructor
        TrafficLight(const TrafficLight& other);
        // Destructor 
        ~TrafficLight();

        // Return the current color of the TrafficLight
        Color getColor();
        // Update the state of the TrafficLight given the current time of the simulation
        void updateState(int time);
        // Return the time remaining before the color changes given the current state of 
        // the TrafficLight and the current time of the simulation
        int getTimeRemaining(int time);

    private:

        int gLength;                // The length of time where the TrafficLight is green in one cycle
        int yLength;                // The length of time where the TrafficLight is yellow in one cycle
        int rLength;                // The length of time where the TrafficLight is red in one cycle
        int cycleTime;              // The length of one traffic cycle: where green, yellow and red each occurs once
        Color currentState;         // The Color that the TrafficLight currently is
        Direction myDirection;      // The direction of traffic that the TrafficLight is assigned to   
};

#endif
