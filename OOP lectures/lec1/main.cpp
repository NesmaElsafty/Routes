#include <iostream>

using namespace std;

class teacher{

    string name;
    string language;
    int salary;
public:
    void setName(string n){
        cout<<"set name: ";
        name = n;
    }
    void setLang(string l){
        cout<<"set language: ";
        language = l
    }
    void setSalary(int s){
        cout<<"set salary: ";
        cin>>salary;
    }

    string getName(){
        return name;
    }
    string getLang(){
        return language;
    }
    int getSalary(){
        return salary;
    }
};

int main()
{
    teacher first;
    teacher second;

    string x,y;
    int z;
    cout<<"Enter teacher name : "<<endl;
    first.setName(x);
    cout<<"Enter teacher language : "<<endl;
    first.setLang(y);

    cout<<"Enter teacher Salary: "<<endl;
    first.setSalary(z);

    cout<<"Teacher Name: ";
    first.getName();

    cout<<"Teacher Language: ";
    first.getLang();

    cout<<"Teacher Salary: ";
    first.getSalary();
    return 0;
}
