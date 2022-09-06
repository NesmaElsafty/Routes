#include <iostream>

using namespace std;

class Vehicle {
public:
    string model;
    string R_number;
    int speed;
    double F_capacity;
    double F_consumption;

public:
    Vehicle(){
        model = "";
        R_number = "";
        speed = 0;
        F_capacity = 0.00;
        F_consumption = 0.00;
    }

    void SetF_consumption(double Fc){
        F_consumption = Fc;
    }

    double GetF_consumption(){
        return F_consumption;
    }


    double fuelNeeded(double distance){
        return distance * f_consumbtion;
    }

    void setSpeed(int s){
        speed = s;
    }

    int getSpeed(){
        return speed;
    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
