/*
#include<iostream>
using namespace std;

void reachHome(int src, int dest ){
    if(src == dest){
        cout << "You reach the Home" << endl;
        return ;

    }
    //processing --> ek step age bad jao
    src ++;

    //recursive call
    reachHome(src,dest);


}
int main() {
    int src = 1;
    int dest = 10;
    cout << endl;

    reachHome(src,dest);
    return 0;

}
*/


//Que -IMP---> Say Digit ex= 412    o/p--> four one two
//TIME AND SPACE COMPLEXITY = O(n)

#include<iostream>
using namespace std;
void sayDigit(int n, string arr[]){

    //base case
    if(n == 0){
        return ;
    }

    //processing
    int digit = n%10; 
    n = n/10;
    //cout << arr[digit] << endl;
    // agra me yha pr cout use karunga to reverse me print hoga 


    //recursion call
    sayDigit(n,arr);
    cout << arr[digit] <<" "<< endl;

}
int main() {

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    cout << endl;

    sayDigit(n, arr);
    cout << endl;
    return 0;
}


// Que---> Fibonachi no.
//TIME AND SPACE COMPLEXIT = O(2^n)  & O(n)
/*
#include<iostream>
using namespace std;

int fibonachi(int n){
    if(n == 0){
        return 0 ;

    }
    if(n == 1){
        return 1;
    }

    return fibonachi(n-1) + fibonachi(n-2);
    
}
int main(){
    int n;
    cin >> n;
    int ans = fibonachi(n);
    cout << ans << endl;
    return 0;

}
*/