//Que--> using binary search finde taregt element present or not 
#include<iostream>
using namespace std;
bool binarySearch(int arr[], int s, int e,int key){
    if(s>e){
        return false;
    }
    
    int mid ;
    mid = s + (e-s)/2; 

    if(arr[mid] == key){
        return true;
    }
    if(arr[mid] < key){
        binarySearch(arr, mid+1, e, key);
        //without recursion 
        //s = mid + 1; // agar ye use karunga to muje index miljayegi us element ki 

    }
    else{
        binarySearch(arr, s, mid-1, key);
        //e = mid - 1;
    }
}
int main() {
    int arr[6] = {2,4,6,10,14,18};
    int size = 6;
    // int key = 18;
    cout << "present or not: " << binarySearch(arr, 0 , 5, 10);
    return 0;

}

//out put 1 means true present hai element 