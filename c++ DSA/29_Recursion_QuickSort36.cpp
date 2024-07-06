//Que-imp--> QUICK SORT using recursion 


#include<iostream>
using namespace std;

// make function for solve partation
int partation(int arr[], int s, int e){
    int pivot = arr[s]; //means jo starting me hoga vo pivot hai use arrange karna hai uski right position me 
    int count = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivot){ //jo bhi pivot se chote hai unka count lena hai 
            count++;
        }
    }
 
    //place pivot at right possition

    int pivotIndex = s + count;
    swap(arr[pivotIndex],arr[s]); 

    //left and right wala part sambhal leta hai 
    //two pointer approach
    int i = s, j = e;
    while(i < pivotIndex && j >pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot ){
            j--;
        }

        if(i < pivotIndex && j >pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;

}

void quickSort(int arr[], int s, int e){

    //base case
    if(s >= e){ 
        return;
    }
    //partation karenge 
    int p = partation(arr,s,e);

    //phele left wala part solve karenge
    quickSort(arr,s,p-1);

    //right wala part solve karenge
    quickSort(arr,p+1,e);
}


int main(){
    int arr[] = {2,4,1,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr,0,n-1);

    //sorted array ko print karva diya
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";

    }
    cout << endl;
    return 0;

}





//Que phone keypad

/*
#include<iostream>
#include<vector>
using namespace std;
class Solution {
private:
    void solve(string digit, string output, int index, vector<string>& ans, string mapping[]){

        //base case
        if(index >= digit.length()){
            ans.push_back(output);
            return ;
        }
        int number = digit[index] - '0';
        string value = mapping[number];

        for(int i=0; i<value.length(); i++){
            output.push_back(value[i]);
            solve(digit, output, index++, ans, mapping);
            output.pop_back();
        }
    }
public:  

    vector<string> letterCombinations(string digit) {
        vector<string>ans;
        if(digit.length() == 0){
            return ans;
        }
        string output;
        int index = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs","tuv", "wxyz"};

        solve(digit, output, index, ans, mapping);
        return ans;
        
    }
};


*/