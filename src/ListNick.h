#include <iostream>

struct node     //node or link
{
    int data;   //data item
    node* next; //pointer to next node

};

//built linked list
class linkedlist
{
    private:
        node* head; //head or first ... pointer to the first node

    public:
        linkedlist()    //constructor
        {
            head=NULL;  //head pointer points to null in the beginning == empty list

        }

        //declaration
        void addElementFirst(int d);            //add element (one node)
        void addElementEnd(int d);              //add element (one node)
        void addElementAfter(int d,int b);      //add element b after node d
        void deleteElement(int d);
        void display();                         //display all nodes

};