 /*
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    
    //push -->insert karne ke liya
    s.push(2);
    s.push(4);
    s.push(6);

    //pop--> remove karne ke liya
    s.pop();
    cout << "Printing top element: " << s.top() << endl;

    // size check karne ke liya 
    cout << "size of stack: "<< s.size() << endl;

    //check karna hai empty to nhi hai
    if(s.empty()){
        cout << "stack is empty: "<< endl;
    }
    else{
        cout<< "stack is not empty: "<< endl;
    }
   

    return 0;



}
*/

//

#include<iostream>
#include<stack>
using namespace std;
class Stack {

    //property
    int *arr;
    int top;
    int size;

    //behaviour
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){ // ek empty space to present hai
        if(size - top > 1){ //means size - top ka element karunga to muje kitna khalihai stack mil jayega
            top++;           //or vo 1 ya ek se khali hai to hum usme element dal sakte hai 
            arr[top] = element;
        }
        else{
            cout << "stack overflow" << endl;
        }

    }
    void pop(){
        if(top >= 0){ // means stack me data pada hai zero nhi hai or hum top ko nikal rahe hai
            top--;
        }
        else{
            cout << "stack underflow"<< endl;
        }

    }
    int peek(){ //means top par konsa element hai
        if(top >= 0 && top < size){  // both right if(top >= 0 ){
            return arr[top];

        }
        else{
            cout << " stack is empty"<< endl;
            return -1;
        }
        

    }
    bool isEmpty(){
        if(top == -1){ //-1 represent stack me kuch nhi hai top tak 
            return true;
        }
        else{
            return false;
        }

    }

};

int main(){
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;



} 


