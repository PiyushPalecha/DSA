 /* three imp concept cover in this code 1-> loop present hai ya nhi
 2->starting loop ka node konsa hai 
3->loop (circle ko break karna hai )ko remove karna hai 
 */
 #include<iostream>
 using namespace std;
 class Node {
        public :
        int data;
        Node *next;
        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

// check loop is present or Not by using algorithium
Node* floydDetectLoop(Node* head) {

    if(head == NULL)
        return NULL;
    //declare two pointer slow and fast
    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL) {

        fast = fast -> next; // phale ek bar age badayenge or check karenge NULL to nhi hai 
        if(fast != NULL) {
            fast = fast -> next; //agar Null nhi hai to ek or bar badayenge 
        }

        slow = slow -> next; //slow ko ek bar badayenge 

        if(slow == fast) {
            return slow;
        }
    }

    return NULL;

}
 // check starting node of circle 
Node* getStartingNode(Node* head) {

    if(head == NULL) 
        return NULL;
       
    //hamne jo loop nikala usko lekar hi chal na hai means uski class ko call kiya hai 
    Node* intersection = floydDetectLoop(head);

    if(intersection == NULL)
        return NULL;

    Node* slow = head; // ab hum slow ko head pr lekar agaye hai 

    while(slow != intersection) { //loop jab tak chala na hai tab tak slow intersection ke equal nhi hojaye 
        slow = slow -> next; //slow ko ek ek kar ke aage badana hai 
        intersection = intersection -> next; // or intersection ko  bhi ek ek karke 
    }  

    return slow;

}

// loop remove karne ke liya 
Node *removeLoop(Node *head)
{
    if( head == NULL)
        return NULL;

    Node* startOfLoop = getStartingNode(head);

    if(startOfLoop == NULL)
        return head;

    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop) {
        temp = temp -> next;
    } 

    temp -> next = NULL;
    return head;
}