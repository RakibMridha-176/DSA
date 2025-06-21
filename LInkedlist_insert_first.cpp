#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};
struct node *head;

void insert_first(int val)
{

    node *temp = new node;
    temp ->data = val;
    temp -> next = head;
    head = temp;

}
void show_list()
{
    node *temp = head;
    while(temp !=  NULL)
    {
        cout<<temp->data<< ", ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    insert_first(8);
    insert_first(5);
    insert_first(4);
    insert_first(9);
    show_list();

}


