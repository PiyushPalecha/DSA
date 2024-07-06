#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;

    }
}
//print krvane ka function 
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";

    }
    cout << endl;


}
int main(){
    int arr[6] = { 2,8,5,-4,-1,9};
    reverse(arr,6); // we call reverse function
    printArray(arr,6);//we call print array function
    return 0;


}
