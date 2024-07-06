#include<iostream>
using namespace std;
class Node {

    public:
    int data;
    Node*prev;
    Node* next;

    //constructor 
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
        
    }

    //destructor 
    ~Node() {
        int value = this -> data; //jo vlaue hai uska data
        //memory free
        if(this -> next != NULL) {
            delete next;
            this -> next = NULL;
        }
        cout << "memory is free for node with data :" << value << endl;
    }
};
    //triverse a linked list 
    void print(Node* head) {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp -> data;
            temp = temp -> next;
        }
        cout << endl;

    }
    void insertAtHead(Node* &head, int d) {
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;

    }

    //inserrt at posiiton
    void insertAtPosition(Node* &tail, Node* &head, int position, int d) {
        //insert at start
        if(position == 1) {
            insertAtHead(head,d);
            return;
        }

        Node* temp = head ;
        int count = 1;

        while(count < position-1){
            temp = temp -> next;
            count++;
        }

        //inserting at last position 

    }
    
    int getLength(Node* head){
        int len = 0;
        Node* temp = head;

        while(temp != NULL) {
            len++;
            //cout << temp -> data;
            temp = temp -> next;
        }
        return len;
    }
    

    void insertAtTail(Node* &tail, int d) {
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }



int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    
    // cout << getLength(head) << endl;


    insertAtHead(head, 11);
    print(head);

    insertAtHead(head, 13);
    print(head);

    insertAtHead(head, 83); // ye age dal reh hai 
    print(head);

    insertAtTail(tail, 23); // ye last me dal reha hai
    print(head);

}