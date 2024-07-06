//Que 1--> reverse a linked list?


#include<iostream>
using namespace std;
class Node{
    public:
    int data; //ye bata reha hai ki node ke andar kis tareha ka data hai
    Node* next; 

    //constructor call
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

Node* reverseLinkedList(Node* head){
    //condition check for empty or single node
    if(head == NULL || head -> next == NULL) {
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL) {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

void printLinkedList(Node* head) {
    Node* curr = head;
    while(curr != NULL) {
        cout << curr -> data << " ";
        curr = curr -> next;
    }
    cout << endl;
}


int main(){
    //create a linked list
    Node* head = new Node(1);
    head -> next = new Node(2);
    head -> next -> next = new Node(3);
    head -> next -> next -> next = new Node(4);
    head -> next -> next -> next -> next = new Node(5);
    cout << "Original Linked List: ";
    printLinkedList(head);

    //Reverse the linked list
    Node* reversedHead = reverseLinkedList(head);
    cout << "Reversed Lineked List: ";
    printLinkedList(reversedHead);

    delete reversedHead;
    return 0;
}



//OR
//Recursive solution

/*
//error
#include<iostream>
using namespace std;
class Node{
    public:
    int data; //ye bata reha hai ki node ke andar kis tareha ka data hai
    Node* next; 
    
    //constructor
    Node(int data){
        this-> data = data;
        this-> next = NULL;

    }
    //destructor
    
};
void reverse(Node* &head, Node* curr, Node* prev){
    //base case
    if(curr == NULL){
        head = prev;
        return;
    }
    Node* forward = curr -> next;
    reverse(head, forward, curr);
    curr ->next = prev;

}
void reverseLinkedList(Node* head){

    Node* curr = head;
    Node* prev = NULL;
    reverse(head, curr, prev);
    return head;
    
}
   

int main(){

}
*/



//Que 2--->Middle of linked list
//using approach 1 first find length 
/*
#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

int getLength(Node* head) {
    int len = 0;
    while(head != NULL){
        len++;
        head = head -> next; // head ko age bada na hai

    }
    return len;

}

  Node* findMiddle(Node* head) {
        int len = getLength(head);
        int ans = (len/2);

        Node* temp = head; //temp banaya head  pr  
        int count = 0;
        while(count < ans) {
            temp = temp -> next;
            count++;
        }
        return temp;
    }


int main(){
    return 0;
  

}

*/
//chat gpt
/*
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int getLength(Node* head) {
    int len = 0;
    while (head != NULL){
        len++;
        head = head->next;
    }
    return len;
}

Node* findMiddle(Node* head) {
    int len = getLength(head);
    int ans = (len/2);

    Node* temp = head;
    int count = 0;
    while (count < ans) {
        temp = temp->next;
        count++;
    }
    return temp;
}

int main(){
    // Create a linked list with nodes
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Find the middle node
    Node* middle = findMiddle(head);

    // Print the value of the middle node
    if (middle != NULL) {
        cout << "Middle element: " << middle->data << endl;
    } else {
        cout << "List is empty." << endl;
    }

    // Clean up memory
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}
*/