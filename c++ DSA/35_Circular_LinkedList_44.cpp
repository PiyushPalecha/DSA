#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
    //destructor
    ~Node() {
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "memory is free for node with data" << value << endl;
    }
};

//hame khali tail chaiya circular LL
void insertNode(Node* &tail, int element, int d) {
    //assuming that the element is present in the list

    //empty list 
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //non empty list 
        // assuming that element is present in the list
        Node* curr = tail; //hamne curr pointer banaya or  use tail me dal diya
        while(curr -> data != element) {
            curr = curr -> next; //curr ko age badate jayenge 
        }
        //element found 
        //curr is representing element wala node

        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;


    }

}

void print(Node* tail){
    //is logic ke hisab se agar single node hogi to me print nhi karva paunga 
    Node* temp = tail;


    // cout << tail -> data << " ";
    // while(tail -> next != temp) {
    //     cout << tail -> data << " ";
    //     tail = tail -> next;

    // }
    // cout << " ";
    
    //OR
 // do while loop ek bar to execute hogahi fir condition check hogi
    do{
        cout << tail -> data << " ";
        tail = tail -> next;
    }while(tail != temp);
    cout << endl;

}
void deleteNode(Node* &tail, int value) {
    // empty list 
    if(tail == NULL) {
        cout << "List is empty, please check again" << endl;
        return;

    }
    else{
        //non-empty
        //assume kar reha hu jo value mena bheji hai vo present hai
        Node* prev = tail;
        Node* curr = prev -> next;
        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;

        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

    }
}


int main() {
    Node* tail = NULL;
    //empty list me insert kar rahe hai 
    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 4);
    print(tail);
    insertNode(tail, 7, 6);
    print(tail);

}