// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     if(a<15){
//         time : cout << a;
//         goto time;
    
//     }
//     // break;
//     return 0;
// }


/*
#include<iostream>
#include<queue>
using namespace std;
class Node{

    public:
    int data;
    Node* left;
    Node* right;

    //constructor call
    Node(int d){
        this-> data = d;
        this-> left = NULL;
        this-> right = NULL;
    }
};
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            //purana level complete traverse
            cout << endl;

            if(!q.empty()){
                //queue still has some child 
                q.push(NULL);
            }
        }
        else{
            cout << temp -> data << " ";
            if(temp -> left) {
                q.push(temp -> left);

                if(temp -> right){
                    q.push(temp -> right);
                }
            }
        }
    }

}

Node* insertIntoBST(Node* root, int d){
    //base case
    if(root == NULL){ //agar root NULL hai tab hamne root banayi usme data dala 
        root = new Node(d);
        return root;
    }

    if(d > root -> data){
        //right part me insert karna hai
        root-> right = insertIntoBST(root->right,d);

    }
    else{// d chota hai root se to hame root ke left me insert karna hai 
        root->left = insertIntoBST(root->left,d);

    }
    return root;
}
void takeInput(Node* &root){
    int data;
    cin >> data;

    while(data != -1){
        insertIntoBST(root, data);
        cin >> data;

    }

}



int main(){
    Node* root = NULL;
    cout << "Enter data to create BST" << endl;
    takeInput(root);

    cout << "Printing the BST"<< endl;
    levelOrderTraversal(root);

    return 0;


}
*/


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool isPrime(int n){
    int div = 2;
    for(div =2; div < n; div++){
        if(n % div == 0)
        return 0;
        
        else{
            return 1;
        }
    }
    div = div +1;
}

int main() {
    int n;
    cin >> n;
    int ans = isPrime(n);
    if(ans){
        cout << "number is prime";
    }
    else{
        cout <<"number is not prime";
    }
    return 0;
    
}