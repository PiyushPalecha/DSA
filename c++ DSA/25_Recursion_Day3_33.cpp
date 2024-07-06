//Que---> Array is sorted or not using recursion
/*
#include<iostream>
using namespace std;
bool isSorted(int arr[], int size) 
{
    //base case
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool remainingPart = isSorted(arr + 1, size -1);
        return remainingPart;
    }
    
}


int main() {
    int arr[5] = {2,4,6,9,11};
    int size = 5;

    //function cALL
    bool ans = isSorted(arr, size);
    if(ans) {
        cout << "Array is sorted" << endl; 
    }
    else{
        cout << "Array is not sorted" << endl;
    }
    return 0;
   
  

}
*/

//Que--> sum of arr using recursion

/*
#include<iostream>
using namespace std;
int getsum(int arr[], int size){

    //base case
    if(size == 0){
        return 0;
    }
    if(size == 1){ // size one hai means us index pr jo value hai vo chaiya 
        return arr[0];
    }

    //processing
    int remainingPart = getsum(arr+1, size-1);
    int sum = arr[0] + remainingPart;
    return sum;
    
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int sum = getsum(arr, size);
    std :: cout << "sum is: " << sum << endl;
    return 0;
}
*/

//Que--> Linear search using recursion
#include<iostream>
using namespace std;
bool Linearsearch(int arr[], int size, int key){
    
    //base case
    if(size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        bool remaining = Linearsearch(arr + 1, size - 1, key);
        return remaining;
    }

}
int main(){
    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 6;
    bool ans = Linearsearch(arr,size,key);
    
    if(ans){
        std :: cout << "present" << endl;
    }
    else{
        std :: cout << "not present" << endl;
    }
    return 0; 
    
}