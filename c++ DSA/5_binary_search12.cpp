/*Binary search me hame mid point nikal na padta hai or fir case lagane pad te hai */
#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    
    int mid = (start + end)/2; //insted of these use mid = start +(end - start)/2;

    while(start <= end){
        if(arr[mid] == key ){
            return mid;
        }
        if(key > arr[mid]){// agar key bada hai , go to right wala part
            start = mid + 1;
        }
        else{//go to left wala part
            end = mid - 1;
        }
        mid= (start + end)/2;
    }
    
    return -1; //-1 isliya derahe hai agar mid nhi hai to ye -1 return kar dega 
}

int main(){
    int even[6] = {2,4,6,8,10,12};
    int odd[5] = {3,8,11,14,16};
    int index = binarySearch(even,6,10);
    cout << " index of 12 is " << index << endl;

    return 0;
}