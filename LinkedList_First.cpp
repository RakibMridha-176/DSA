#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;

    node( int val){
        data = val;
        next = NULL;

    }
};

class list{
    node * head;
    node * tail;
    
    public:
    list(){
        head =  tail = NULL;
    }

    void push_insert( int val){
        node * newNode = new node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
            newNode -> next = head;
            head = newNode;
        }
    }
    void print(){
        node* temp = head;
        while(temp != NULL){
            cout<< temp-> data << " ";
            temp = temp-> next;
        }
        cout<<endl;
    }
};
int main(){
    list x;
    x.push_insert(1);
    x.push_insert(2);
    x.push_insert(3);
    x.push_insert(4);

    x.print();

    return 0;

}