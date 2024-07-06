// INSERTION AT ANY POSITION in these code all 3 method to insertNode
//SINGLY LINKED LIST
#include<iostream>
using namespace std;
//declaration of node class
class Node {
    public:
    int data; //ye bata reha hai ki node ke andar kis tareha ka data hai
    Node* next; 

    //constructor call ---> isliya kiya taki  hamne jo heap me memory banai hai usme data dalpaye 
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
    //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;

        }
        cout << "Memory is free for node with data " << value << endl;

    }


};

//hame new node insert karni hai 
void InsertAtHead(Node* &head, int d){ //hame reference isliya liya hai taki hamari linkedlist me hi sab changes ho new node nhi bane
    //new node creation
    Node* temp = new Node(d);
    //ab is node ke next ko head se point karva do
    temp -> next = head;
    head = temp; //head ko temp pr bhej do
}

void InsertAtTail(Node* &tail, int d){
    //create new node
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next; //tail ko next node pr bhej diya

}



// linked list ko print karane ke liya 
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " "; //temp ki value print karvayi
        temp = temp -> next; //temp ko agebada diya
    }
    cout << endl;

}

// Node Inserat at  given position
void InsertAtPosition(Node* &tail, Node* & head, int position, int d){
    
    if(position == 1) {//hame position 1 pe insert karna ho uske liya ye condition
        InsertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int count = 1;

    while(count < position-1) {
        temp = temp -> next; //temp ko age bada te reho
        count++;
    }
    //inserting at last  position
    if(temp -> next == NULL){
        InsertAtTail(tail, d);
        return;
    }


    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;


}

//DELETE NODE BY POSITION
void deleteNode(int position, Node* &head){
    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        //memory free start node
        delete temp;

    }
    else{
        //deleting any middle node or last node 
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while(count < position) {
            prev = curr;
            curr = curr -> next;
            count++;

        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }

}
int main() {
    //give these Node class to heap memory ---> hamne jo Node class banayi hai usko heap me memory mile iske liya 
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    //head pointed to node
    Node* head = node1;
    Node* tail = node1;
    print(head);

    //insert aage karane ke liya
    // InsertAtHead(head, 12);
    // print(head);

    // InsertAtHead(head, 15);
    // print(head);
  

   //hamnae insert at tail kiya taki jo hele tha vo phela or jo bad me aya vo bad me 
    InsertAtTail(tail, 12);
    print(tail);

    InsertAtTail(tail, 15);
    print(tail);


    // hame ab position pr insert karana hai
    InsertAtPosition(tail, head, 3, 22);
    print(head);

    cout << "head:" << head -> data << endl;
    cout << "tail:" << tail -> data << endl;


}

