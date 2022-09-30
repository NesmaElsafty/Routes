#include <iostream>

using namespace std;

class Person {
public:
    int id;
    string name;
    string password;

    Person(){
        id = 1;
        name = "Nesma";
        password = 12345678;
    }

    Person(string n, int i, string s){
        setName(n);
        setId(i);
        setPassword(s);
    }

    void setName(string n){
        name = n;
   }

   string getName(){
        return name;
    }

   void setId(int i){
        id = i;
   }
    int getId(){
        return id;
    }
   void setPassword(string s){
        password = s;
   }

   string getPassword(){
        return password;
    }
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
