#include <iostream>
#ifndef LINKEDLIST_H;
#define LINKEDLIST_H;
#include <forward_list>
#include <list>
using namespace std;

class Node {
public:
    int value;
    Node* next = NULL;
    Node* prev = NULL;
};

class DLL{
public:
    void addToFirst(int value){
        Node* n= new Node();
        n->value = value;   //assign value
        if(head==NULL){
                head = n;
                return;
        }
        n->prev = head;    //5lly el nexy bta3 el n y4awr 3la nfs el mkan elly byshawer 3leh el head
        head->prev = n
        head = n;
    }

    void removeFirstNode(){
        if(head==Null) return;

        if(head==tail){
            head=tail=NULL;
            return;
        }
        Node* n=head;
        head = head->next;
        head->prev = Null;
        delete n;
    }
    void addToLast(int value){
        if(head == NULL){
            addToFirst(value);
            return;
        }
        Node* n= new Node();
        n->value = value;
        n->prev = tail;
        tail->next = n;
        tail = n;

    }

    void removeFromLast(){
     if(head == NULL) return;
     if(head == tail){
        removeFromFirst();
        return;
     }
        tail = tail->prev;
        delete tail->next;
        tail->next = NULL;
    }
private:
    Node* head=NULL;
    Node* tail=NULL;
};

//Stack Class
//Last in First out
//push >> push to last
//TOP > get last item
//POP > remove last item
//empty > check if it's empty
//Size > size of stack


//queue Class
//first in first out
//
int main()
{
//Using List Class
    List<int> items;
    items.push_back(10);
    items.push_front(10);
    items.pop_back();
    items.pop_front();


// List = the name of class , int = type of the pointer , iterator = Pointer , first = name of pointer , items our opject , items.begin = the pointer finder "head"
    List<int>::iterator first= items.begin;
    items.insert(first,value) //the value i wanna insert
    first++;

    items.erase(first);

    while(first != items.end()){
        count<<*first<<endl;
    }


    return 0;
}
