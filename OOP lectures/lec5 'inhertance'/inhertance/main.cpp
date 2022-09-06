#include <iostream>

using namespace std;

class shape {
protected:
    int height;

public:
    shape(){
        height = 0;
    }
    shape(int h){
        height = h;
    }
    void setHeight(int h){
        height = h;
    }

    int getHeight(){
        return height;
    }
};
class rectangle:public shape {
protected:
    int width;

public:
    rectangle(){
        width = 0;
    }
    rectangle(int h, int w):shape(h){
        width = w;
    }
    void setWidth(int w){
        width = w;
    }

    int getWidth(){
        return width;
    }
    int getArea(){
        return width*height;
    }

};

class triangle:public shape{
protected:
    int base;

public:
    triangle(){
        base = 0;
    };

    triangle(int b, int h):shape(h){
        base = b;
    }

    void setBase(int b){
        base = b;
    }

    int getBase(int b){
        return b;
    }

    int getArea(){
        return 0.5 * base * height;
    }

};

int main()
{
    rectangle r(2,2);
    cout<<"rectangle area: " << r.getArea()<<endl; //4

    // OR

    r.setWidth(5);
    r.setHeight(2);
    cout<<"rectangle area: " << r.getArea()<<endl; //4
//###############################################################


    triangle t(2,2);
    cout<<"triangle area: " << t.getArea()<<endl; // 2

    return 0;
}
