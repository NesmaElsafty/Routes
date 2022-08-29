#include <iostream>

using namespace std;

class Teacher {
    string name;
    int age;
    int salary;

public:

    Teacher(){
     name = "Nesma";
     age = 25;
     salary = 2000;
    }

    Teacher(string n, int a, int s){
        setName(n);
        setAge(a);
        setSalary(s);
    }
   void setAge(int a){
        if(a >= 25){
        age = a;
        }
   }

   void setName(string n){
        name = n;
   }

   void setSalary (int s){
        if(s >= 5000){
            salary = s;
        }
   }

    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    int getSalary(){
        return salary;
    }

};


class Course {
    string name;
    int hours;
    Teacher myTeacher;


        Teacher Tname;
        Teacher Tage;
        Teacher Tsalary;

public:

   void setHours(int h){
        hours = h;
   }

   void setTname(string n){
        name = n;
   }

    string getName(){
        return name;
    }

    int getHours(){
        return hours;
    }


    void setMyTeacher(string n, int a, int s){

        Tname.setName(n);
        Tage.setAge(a);
        Tsalary.setSalary(s);
    }

    string getTName() {
        return Tname.getName();
    }

    int getTAge() {
        return Tage.getAge();
    }

    int getTSalary() {
        return Tsalary.getSalary();
    }

};

int main()
{

    Teacher myTeacher;
    Course c1;

    Teacher("nesma", 25, 5200);
    Course("ITI", 3, c1.setTname("Ali"));

    cout<<c1.getName<<endl;
    cout<<c1.getHours<<endl;

    cout<<c1.getTName<<endl;

    return 0;
}
