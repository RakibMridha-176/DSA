#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};
node *top = NULL;

void push(int value){
    node *newnode = new node;
    newnode -> data = value;
    newnode -> next = top;
    top = newnode;
    cout<< value << " , " ;
}

int main(){
    push(12);
    push(23);
    push(89);

    return 0;
}