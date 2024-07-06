//Que--->1  factorial using recursion



/* //recursion factorial    //TIME COMPLEXITY  & SPACE COMPLEXITY  = O(n)
#include<iostream>
using namespace std;

int factorial(int n){

    //base case (means ab ruk jana hai)
    if(n == 0){

        return 1;
    }

    int chotti = factorial(n-1);
    int badi = n * chotti ;
    return badi;
    //int badi = n * factorial(n-1);

}
 

int main() {
    int n;
    cin >> n;
    int ans = factorial(n);
    cout << ans;
}
*/

//Que----> 2 power  of 2  //TIME AND SPACCE Complexity = o(2 XOR n) & o(n)


/* ye code hai 2 ki power nikale ne ka ex->  i/p 10--->o/p 1024*/
/*
#include<iostream>
using namespace std;
int power(int n){

    //base case
    if(n == 0){
        return 1;
    }
    
    //recursive relation
    int smaller = power(n-1);
    int bigger = 2 * smaller;
    return bigger;
}
int main(){
    int n;
    cin >> n;

    int ans = power(n);
    cout << ans;
}
*/



//Que---> 3
// Print number i/p 5 , then O/p--> 5,4,3,2,1

#include<iostream>
using namespace std;
void print(int n){
    //base case
    if(n == 0){
        return ;
    }  // means jesa hi n ayega use print karvana padega 
    
   
    //processing line 
    cout << n << endl;

    /*agar yha me (cout) orr (print) wale ki position exchange kar du to yha "head case"case hoga or out put 1 to 5 print hoga */
    // recursive relation
    print (n-1);
    


}
int main() {
    int n;
    cin >> n;
    print(n);
    return 0;
    
}