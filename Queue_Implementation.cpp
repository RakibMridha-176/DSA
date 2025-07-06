#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

node *front = NULL;
node *rear = NULL;

void enqueue(int value){
    node *temp = new node();
    temp -> data = value;
    temp -> next = NULL;

    if(rear == NULL){
        front = rear = temp;
    }else{
        rear -> next = temp;
        rear = temp;
    }
}

void dequeue(){
    if( front == NULL){
        cout<<"Queue Underflowed"<< endl;
        return;
    }
    node * temp =  front;
    cout<< front -> data << endl;
    front = front -> next;

    if(front == NULL){
        rear = NULL;
    }
    delete temp;
}

void display(){
    node *temp= front;
    if(!temp){
        cout<< "Queue Empty"<< endl;
        return;
    }

    while(temp != NULL){
        cout << temp -> data << endl;
        temp = temp -> next;
    }
    cout<< " " << endl;
}

int main(){
    enqueue(12);
    enqueue(14);
    enqueue(16);
    display();

    dequeue(16);
    display();

    return 0;
    
}