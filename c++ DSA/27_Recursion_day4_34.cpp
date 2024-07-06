//Que---> Palindrom using recursion
/*
#include<iostream>
using namespace std;

bool checkPalindrom(string str, int i , int j){

    // base case
    if(i > j) { //matlab hamne sara elemnt check karliya 
        return true ;
    }

    if(str[i] != str[j]){
        return false;
    }
    else{
        //recursive call
        return checkPalindrom(str, i++, j--);
    }

}
int main() {
    string name  = "abbcca";
    cout << endl;

    bool isPalindrom = checkPalindrom(name, 0 , name.length()-1);

    if(isPalindrom){
        cout << "It is Palindrom " << endl;
    }
    else{
        cout << "It is not Palindrom " << endl;
    }
    return 0;
}

//some error occured
*/


//Que2---> Calculating power using recursion
/*
#include<iostream>
using namespace std;
int calculatePower(int a, int b){
    if(b == 0){     // b means jo power ma hai vo 
        return 1;
    }
    if(b == 1){
        return a;
    }

    //recursive call
    int ans  = calculatePower(a , b/2);
    

    // agar b even hai to ye or odd hai 
    if(b%2 == 0){
        return  ans * ans; // even
    }
    else{
        return a* ans * ans ;// number is odd
    }
    

}
int main() {
    int a, b;
    cin >> a >> b;

    int ans = calculatePower(a,b);
    cout << "Answer is " << ans << endl;
    return 0;

}
*/


//Quee--- >> Bubble sort using recursion
#include<iostream>
using namespace std;
int bubbleSort(int arr[], int n){

    //maan lo starting ke dono index already sort hai 
    if(n == 0 || n == 1){
        return 1;
    }

    // issae largest element last index pr chala jayega
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);

        }
    }
    
    // recursive case (baki ka kam recursion apne app karlega )
    bubbleSort(arr,n-1);
}
int main(){
    int arr[5] = {4,6,2,5,1};
    bubbleSort(arr,5);

    for(int i=0; i<5; i++){
        cout << arr[i] << endl;
    }
    return 0;
}

