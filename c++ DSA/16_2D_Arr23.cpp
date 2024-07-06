//QUe--:> TO FIND TARGET ELEMENT 
/*
#include<iostream>
using namespace std; 

// function to find target element
bool ispresent( int arr[][4], int target, int i, int j){
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;

}
int main() {

    //create 2d array
    int arr[3][4];

    //taking input---> as row wise
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }   

    
    //taking input---> as coloum wise
    /*
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cin >> arr[j][i];
        }
    }
    */

    //output print 
    
   /* 
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }



    cout << "enter the element to search " << endl;
    int target;
    cin >> target;
    if(ispresent(arr , target, 3, 4)){
        cout << "element found" <<endl;

    }
    else{
        cout << "element not found";
    }
    return 0;
}

*/


// Ques---> Finde the row wise sum -------------------------------------------------------------------------
/*
#include<iostream>
using namespace std;
void printsum(int arr[][4], int i , int j ){
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<4; j++){
            sum += arr[i][j]; 
        }
        cout << sum << " " ;
    }
}
int main() {
    //declare 2 d arr
   
    int arr[3][4];
    cout<<"enterr the element";
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }
    cout<<"printing the element";
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
    printsum(arr,3,4);
    return 0;
}
*/