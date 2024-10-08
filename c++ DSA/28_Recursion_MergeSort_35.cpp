//Que--- > merge sort using recursion
#include<iostream>
using namespace std;

void mergeSort(int arr[], int s, int e){
    int mid = s + (e-s)/2;

    //left and right part wale dono arr ki length nikali
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // new array
  
    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int  mainArrayIndex = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];

    }

    int  mainArrayIndex = mid + 1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];

    }

    //merge
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];

        }
    }
    while(index1 < len1) {
        arr[mainArrayIndex++] =first[index1++];
    }
    while(index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

}

/*
 void mergeSort(int arr[], int s, int e){
    //base case
    if(s>=e){// means s , ending se age badjayga tab return kar na hai
    return ;
    }
    int mid = s + (e-s)/2;

    //left wala part sort karna hai 
    mergeSort(arr, s, mid);

    //right wala part sort karna hai 
    mergeSort(arr, mid + 1, e);

    //merge karna hai 
    mergeSort(arr,s,e);
 }
 */

int main(){
    int arr[5] = {2,5,1,6,9};
    int  n =5;

    mergeSort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout << arr[i];
    }

    return 0;

    

    
}