#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
     Node(int value){
        data=value;
        next=NULL;  
     }
     };
     //function to print linked list in reverse  using recursion
void printReverse(Node* head){
    if(head==NULL)
        return;
    printReverse(head->next);
    cout<<head->data<<" ";
}

int main(){
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);

    cout<<"Linked list in reverse order: ";
    printReverse(head);
    cout<<endl;

    return 0;
}