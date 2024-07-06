//Que 2 ---> check circular linked list or not?
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

//import code for check circular linked list or not
bool isCircularLinkedList(Node* head){
    //empty case
    if(head == NULL){
        return true;
    }
    Node* temp =  head -> next;
    while(temp != NULL && temp != head){
        temp = temp -> next; 
    }
    if(temp == head){
        return true;
    }
    return false;
}
int main(){
    Node* tail = NULL;

    if(isCircularLinkedList(tail)){
        cout << "linked list is circular " << endl; 
    }
    else{
        cout << "linked list is not Circular " << endl;
    }
    
    return 0;
}