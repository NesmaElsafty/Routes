#include <iostream>

using namespace std;

class Car {
    int year;
    string brand;
    int maxSpeed;

public:

    Car(){
     year = 1980;
     brand = "opel";
     maxSpeed = 120;
    }

    Car(int y, string b, int m){
        setBrand(b);
        setMaxSpeed(m);
        setYear(y);
    }
   void setYear(int y){
        if(y > 1970 || y <= 2022){
        year = y;
        }
   }

   void setBrand(string b){
        brand = b;
   }

   void setMaxSpeed (int ms){
        if(ms > 100 || ms < 220){
            maxSpeed = ms;
        }
   }

    int getYear(){
        return year;
    }

    string getBrand(){
        return brand;
    }

    int getMaxSpeed(){
        return maxSpeed;
    }
};

int main()
{

    Car c(2000,"BMW",200);
    Car c2;
    c2.setMaxSpeed(110);
    if(c.getMaxSpeed()>c2.getMaxSpeed()){
        cout<<c.getBrand()<<endl;
    }else{
        cout<<c2.getBrand()<<endl;
    }
    return 0;
}


