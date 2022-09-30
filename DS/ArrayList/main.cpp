#ifndf ARRAYLIST_H;
#define ARRAYLIST_H;
#include <iostream>
#include "ArrayList.h"
#include <vector> //Built in Class has the functions of the ArrayList

using namespace std;


class ArrayList
{
public:
    ArrayList(){ //Constructor

    arr = new int[capacity];
    }

    void addToLast(int value){
        if(capacity == count){
            expand();
        }
        arr[count] = value;
        count++;

    }
    void removeFromLast(){
        for(int i= 0; i < count-1; i++){
            cout<<arr[i]<<" ";
        }
    }
    void print(){
        for(int i= 0; i < count; i++){
            cout<<arr[i]<<" ";
        }
    }
    void addToFirst(int value){
        if(count == capacity){
            expand();
        }
        for(int i=count; i>= 0; i--){
            arr[i] = arr[i-1];
        }
        arr[0] = value;
        count++;
    }
    void addByIndex(int index, int value){
        if(count == capacity){
            expand();
        }
        for(int i=count; i>= index; i--){
            arr[i] = arr[i-1];
        }
        arr[index] = value;
        count++;
    }
    void removeFromFirst(){
        for(int i= 0; i < count-1; i++){
            arr[i] = arr[i+1];
        }
    }
    void removeByIndex(int index){

        for(int i=index; i<count-1; i++){
            arr[i] = arr[i+1];
        }
        count--;
    }
    void update(int index, int value){
        arr[index] = value;
    }
    int get(int index){
        return arr[index];
    }
    int find (int value){
        for(int i=0; i < count; i++){
            if(arr[i] == value){
                return i;
            }
        }
        return -1;
    }
private:
    int capacity = 5;
    int count = 0;
    int* arr;

    void expand(){ //expands array space by add the values of small array to bigger one;
        capacity*=2
        int* temp = new int[capacity];

        for(int i=0; i<count; i++){
            temp[i] = arr[i];
        }
        delete arr;
        arr = temp;
    }

};
int main()
{
    vector<int> items; //class container that contains ArrayList Methods
    vector<int> items(size, value); //constructor method of the vector
    items.push_back(); //AddToLast Method
    items.size(); //Counter of the List
    items.capacity(); //Capacity or "size" of the array
    begin(); //retrieve pointer of first place into the vector

    items.insert(item.begin()+'index-1' ,value); //addByIndex > it gets the index by pointer
    items.erase(item.begin())
    return 0;
}
