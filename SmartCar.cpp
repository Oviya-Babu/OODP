
#include <iostream>
using namespace std;

class SmartCar {
public:
    static int speedLimit; // Static variable for speed limit
    string model;
    int speed;

    SmartCar(string model) {
        this->model = model;
        this->speed = 0;
    }

    static void setSpeedLimit(int new_limit) {
        // Updates the global speed limit
        speedLimit = new_limit;
        cout << "Speed limit updated to " << new_limit << " km/h" << endl;
    }

    void setSpeed(int new_speed) {
        // Sets the car's speed but ensures it does not exceed the speed limit
        if (new_speed > speedLimit) {
            cout << "Cannot set speed to " << new_speed << " km/h. Limit is " << speedLimit << " km/h." << endl;
            speed = speedLimit;
        } else {
            speed = new_speed;
        }
        cout << model << " speed set to " << speed << " km/h" << endl;
    }

    int getSpeed() {
        return speed;
    }
};

// Initialize static variable
int SmartCar::speedLimit = 60;

// Example Usage
int main() {
    SmartCar car1("Tesla Model 3");
    SmartCar car2("Ford Mustang");

    car1.setSpeed(70);  // Should be limited to 60
    SmartCar::setSpeedLimit(80);  // Change global speed limit
    car2.setSpeed(75);  // Should now be allowed
    car1.setSpeed(85);  // Should be limited to 80
    
    return 0;
}
