// some error due to syntax mistake 
// logic  right hai
//Square root nikal na hai jo bhi mid hai uska using Binary search

/*
#include<iostream>
using namespace std;

long long int squareRoot(int arr[], int n, int key){

    int s = 0; 
    int e = n;
    long long int mid = s + (e - s)/2;
    int ans = -1;

   while(s<=e){

    

      long long int square = mid * mid;
      if(square == key){
         return mid;
      }
      else if(square < key){
         ans = mid;
         s = mid + 1;
      }
      else {
         e = mid - 1;
      }
      long long int mid = s + (e - s)/2;
     
   }
   return ans;
   
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int key  = 3;
    cout << " square root by binary " << squareRoot(arr, 5 , key ) <<endl; //5 is the size of array 

    return 0;
}
*/

//Chat gpt 
#include<iostream>
using namespace std;

long long int squareRoot(int arr[], int n, int key){

    int s = 0; 
    int e = n;
    long long int ans = -1;

    while(s <= e){
        long long int mid = s + (e - s)/2;
        long long int square = mid * mid;

        if(square == key){
            return mid;
        }
        else if(square < key){
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int key = 2;
    cout << "Square root by binary search: " << squareRoot(arr, 5, key) << endl;

    return 0;
}
