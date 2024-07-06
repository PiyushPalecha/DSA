/*
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(7);

    cout << "size of queue is : " << q.size() << endl;
    q.pop();
    cout << "size of queue is: " << q.size() << endl;
    if(q.empty()){
        cout << "Queue is empty: " <<  endl;
    }
    else{
        cout<<"Queue is not empty: " << endl;
    }
}

*/
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(11);
    cout <<"front of q is:" << q.front() <<endl;
    q.push(13);
    cout <<"front of q is:" << q.front() <<endl;
    cout <<"size of q is:" << q.size() <<endl;
    if(q.empty()){
        cout <<"queue is empty" <<endl;
    
    }
    cout << "queue is not empty" <<endl;

}