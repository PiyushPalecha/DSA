// find first and last position of element in array imp ask in interview
/*
#include<iostream>
using namespace std;
int binarySearchFirstOccurence(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int ans = -1;

    int mid =  start + ( end - start)/2;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1; //mid ke aage to khi same key word or to nhi hai check karne ke liya

        }
        else if (key > arr[mid]){
            start = mid + 1;

        }
        else if (key < arr[mid]){
            end = mid -1;

        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int binarySearchforLastOccurence(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int ans = -1;

    int mid =  start + ( end - start)/2;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;  //only change in last occurence is at this line 

        }
        else if (key > arr[mid]){
            start = mid + 1;

        }
        else if (key < arr[mid]){
            end = mid -1;

        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main(){
    int even[5] = {1,2,3,3,5};
    cout << " First Occurence of 3 is " <<binarySearchFirstOccurence( even, 5, 3) << endl; 
    cout << " Last Occurence of 3 is " <<binarySearchforLastOccurence( even, 5, 3) << endl;  

    return 0;
}
*/


//Que--->  find first occurrrence of element
// #include <iostream>
// using namespace std;
// void findFirstOccurrence(int arr[], int n, int target){
//     for(int i=0; i<n; i++){
//         int first = -1;

//         if(arr[i] == target){
//            first = i;
//             break;

//         }
//     }
// cout << first;

// }

/*
#include <iostream>
using namespace std;

void findFirstOccurrence(int arr[], int n, int target) {
    int first = -1; // Initialize first outside the loop

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            first = i;
            break;
        }
    }

    if (first != -1) {
        cout << "First occurrence found at index: " << first;
    } else {
        cout << "Target not found in the array.";
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    findFirstOccurrence(arr, n, target);

    return 0;
}


*/






//imp ----->INSERTION SORT


#include <iostream>
using namespace std;

void insertRecursive(int arr[], int n) {
    //base case
    if (n <= 1) {
        return;
    }

    // Sort first n-1 elements
    insertRecursive(arr, n - 1);

    // Insert the last element at its correct position in the sorted array
    int lastElement = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > lastElement) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = lastElement;
}

int main() {
    int arr[] = {56, 43, 32, 89, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertRecursive(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

//o/p-> 13 32 43 56 89 