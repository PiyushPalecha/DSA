#include<iostream>
using namespace std;

void merge(int arr1[], int arr2[], int arr3[], int n, int m){ //n = size of arr1 , and m = size of arr2
    int i=0 , j=0 , k=0;
    
    //condition check 
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j]; 
            k++;
            j++;
        }
    }
    //copy first array ke element ko
    while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    //copy second array k  remaining element ko
    while(j<m){
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

   // for printing the merge sorted array 
    void print(int ans[], int n){
        for(int i=0; i<n; i++){
            cout<< ans[i] << " ";
        }
        cout << endl;
    }
    
int main(){

    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};

    int arr3[8] = {0};

    merge(arr1, arr2, arr3, 5, 3);
    print(arr3, 8);
    return 0;
}

