// allocate minimum number of pages using binary search 

//important 

#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int>& arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    for (int i=0; i<n; i++) {
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else {
            studentCount++;
            if (studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int>& arr, int n, int m) {
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int e = sum; //sum ko e me dal diya 
    
    int ans = -1;
    int mid;

    while (s <= e) {
        mid = s + (e - s) / 2;
        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {10,20,30,40};   // i/p = 12, 34, 67, 90
    int n = arr.size();
    int m = 2; // kitne student ki bich divide karna hai (total student)

    int minPages = allocateBooks(arr, n, m);
    cout << "Minimum number of pages allocated: " << minPages << endl;

    return 0;
}



