// #include<iostream>
// using namespace std;
// int main()
// {
//     //declare array
//     int first[3] = {5,7,11};
//     //accessing an element
//     cout<<"value at 2 index" <<endl << first[2] << endl;

//     int second[15] = {2,7};
//     int n =15;
//     cout<<"printing the array"<<endl;
//     for(int i =0; i<n; i++){
//         cout<<second[i]<<" ";
//     }

//  return 0;

// }


//QUE-->
// MAX AND  MIN CODE
/*
#include<iostream>
#include<climits>         //use when int max , min use 
using namespace std;
int getMin(int num[] , int n)
{
    int mini = INT_MAX;
    for(int i=0; i<n; i++)
    {
        mini = min(mini ,num[i]);// we can also write
        // if(num[i] > min){
        //     min = num[i];
        // }

    }
      //returning minimum value
    return mini;


}

int getMax(int num[] , int n){
    int maxi = INT_MIN;
    for(int i= 0; i<n; i++){
        // if(num[i] > max){
        //     max =num[i];
        // }
        maxi = max(maxi, num[i]);
    }
    return maxi;
}



int main()
{
    int size ;
    cin >> size;

    int num[100];
    //taking input in array
    for(int i = 0; i<size ; i++){
        cin>> num[i];

    }
    cout<<"Maximum value is"<< getMax(num,size) << endl;
    cout<<"Minimum value is"<< getMin(num,size) << endl;


}
*/

//1->i/p array size
//2-> array element 
//o/p  -> max and min in array


//Que --> sort array like 1,2,3,2,1,5,4,4 -- > o/p 1,1,2,2,3,4,4,5

//approach 1
/*
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 1, 2, 4, 3, 4, 1, 2};
    
    // Sort the array
    std::sort(arr.begin(), arr.end());
    
    // Output the sorted array
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    
    return 0;
}
*/

/*
#include <iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main() {
    int arr[] = { 1, 2, 3, 4, 1, 2, 4, 3, 4, 1, 2 };
    int size = sizeof(arr)/ sizeof(arr[0]);

    sortArray(arr, size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
*/