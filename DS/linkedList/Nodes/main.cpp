#include <iostream>
#ifndef LINKEDLIST_H;
#define LINKEDLIST_H;

//for linked lists
#include<forward_list> //for single linked list //check the defination of it from cplusplus.com
#include<list>

using namespace std;

class Node {
public:
    int value;
    Node* next = NULL;
};




class LinkedList {
public:
    // C R U D
    void addToFirst(int value){
        Node* n= new Node(); //create node
        n->value = value;   //assign value
        n->next = head;    //5lly el nexy bta3 el n y4awr 3la nfs el mkan elly byshawer 3leh el head
        head = n;         // make the n > Head
    }

    void print(){
        Node* p=head;
        while( p!=Null){
            cout<<n->nest<<"->";
            p = p->next;
        }
    }

    void removeFromFirst(){
        if(head==NULL)return;

        Node* n=head;
        head = head->next;
        delete n;
        //(1)
        //   head
        //    |
        //    5->3->4->NULL
        //(2)
        //    head
        //     |
        //  5->3->4->NULL
    }

    void addToLast(int value){
        Node* n= new Node();
        n->value = value;
        Node* p = head;
        p = p->next

        while(p->next != Null){
            p = p->next;
        }
        p->next = n;
    }

    void removeFromLast(int value){
        if(head==NULL){
            addTofirst(value);
            return;
        }
        if(head->next == NULL){
            removeFromFirst();
            return;
        }
        Node* n= new Node();
        n->value = value;
        Node* p = head;
        Node*prev;

        while(p->next != Null){
            p = p->next;
        }
        delete p;
        prev->next = NULL
        p->next = n;
    }

private:
    Node* head = NULL; //POINter into Stack
};


int main()
{
    Node* first = new Node();
    Node* second = new Node();

    first->value = 5;
    second->value = 7;

    first->next = second;
    cout<<first->value<<endl;
    cout<<first->next->value<<endl;

    //Forward link
    forward_list<int> items; // creating opject from forward link class

    items.push_front(8);
    items.begin(); // bt7ot pointer 3la awl element fl array aw fl vector bta3y
    items.insert_after(items.begin(),10); //(awl)

    forward_list<int>::iterator it;
    it = items.begin();
    //begin btrg3 iterator "7aga zi el pointer" b3ml save fe iterator like line 112
    //iterator is built in function into forward_list
    //bdl el node->next bnst5dm fl iterators ++ like the following.

    it++;


    return 0;
}
