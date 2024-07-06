//Que1----> reverse using stack? Without Recursion 
/*
#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str = "babbar";
    stack<char> s;

    //phele sab element  stack me dalne ke liya
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        s.push(ch);

    }

    string ans = " ";
    //while loop jab tak chalega tab tak hamara stack empty nhi hojaye
    while(!s.empty()){
        char ch = s.top(); //hamne char. liya top wala or usea
        ans.push_back(ch); //usaee hamne ans wali string me dal diya
        s.pop(); // or use stack me se hata diya 
    }
    cout << "answer is: " << ans << endl;
    return 0;
}

*/


//Oue-5 --> Recursion using stack 


//Que-4---> insert  x element at bottom of stack ?
#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> & s , int x){
    if(s.empty()){
        //means agar stack khalihai to usame x dal do 
        s.push(x);
        return;
    }
    
    int num = s.top(); // hamne stack me top wale element ko side me rekh diya
    s.pop();        //top wale element ko stack se bhar nikal diya 

    //Recursive Call
    solve(s,x);
    s.push(num);
}
stack<int> pushAtBottom(stack<int> & myStack , int x){
    solve(myStack,x);
    return myStack;
}  
