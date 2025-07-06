#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;

};
node *top = NULL;

void pop(){
    if( top == NULL){
        cout<<"Stack Underflowed"<< endl;
        return;
    }
    node *temp = top;
    cout<< "Popped:  " << top -> data << endl;
    top = top -> next;
    delete temp;
}

int main(){
    pop();

    return 0; 
}