#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s = 0;
    int e = n-1;

    int mid = s + (e - s)/2;

    while(s < e){          // Note:-> iswale me <= nhi ayega
    if(arr[mid] >= arr[0]){
        s = mid + 1;              //mid =2 -> 3>= 8x => 8 5 3--> mid 5-> 5> 8
    }
    else{
        e = mid;
    }
    mid = s + (e - s)/2;

    }
    return s;
}
int main(){
    // int arr[5] = { 8, 10, 17, 1, 3};// op: pivot is 3
    int arr[5] = {8,5,3,19,43};
    cout << "Pivot is " << getPivot(arr, 5) << endl; // index  return karega 
    return 0;
}