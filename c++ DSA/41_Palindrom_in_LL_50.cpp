//geeks for geeks
// isme hamne LL ko pahle arr me dala or fir check kiya palindrome hai ya nhi
/*
#include<iostream>
#include<vector>
using namespace std;
class Solution{
    struct Node{
        int data;
        struct Node *next;
        Node(int x) {
            data = x;
            next = NULL;
        }
    };
    private:
    bool checkPalindrome(vector<int> arr){
        int n = arr.size();
        int s = 0;
        int e = n-1;
        while(s<=e){
            if(arr[s] != arr[e]){
                return 0;

            }
            s++;
            e--;

        }
        return 1;

    }
    public:
    bool isPalindrome(Node *head){
        vector<int> arr;
        Node* temp = head;
        while(temp != NULL){
            arr.push_back(temp -> data);
            temp = temp -> next;

        }
        return checkPalindrome(arr);
    }

};
int main(){
   
}
*/

//Approach 2
#include<iostream>
using namespace std;

class Solution{
    struct Node{
        int data;
        struct Node *next;
        Node(int x) {
            data = x;
            next = NULL;
        }
    };

    private:
    Node* getMid(Node* head){
        Node* slow = head;
        Node* fast = head->next;

        while(fast != NULL && fast-> next != NULL){
            fast = fast -> next -> next; 
            slow = slow -> next;
        }
        return slow;
    }

    public:
    //function to check whether the list is palindrom 
    bool isPalindrome(Node *head){
        if(head == NULL || head -> next == NULL){
            return true;
        }
        //step 1 -> find middle
        Node* middle = getMid(head);

        //step2 -> reverse the linked after middle
        Node* temp = middle -> next;
        middle -> next = reverse(temp);

        //step 3 -> compare both halves
        Node* head1 = head;
        Node* head2 = middle->next;
        while(head2 != NULL){
            if(head1 -> data != head2 -> data){
                return false;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
        //step 4 -> repeat step 2
        temp = middle -> next;
        middle -> next = reverse(temp);
        return true;
    }
};
int main(){
}
