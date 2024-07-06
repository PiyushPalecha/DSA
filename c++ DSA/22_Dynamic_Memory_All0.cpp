/* Dynamic memory allocattion in array using heap memory (dynamic memory allocation )*/
/*
#include<iostream>
using namespace std;
int main() 
{
    //code for both number of rows and coloum are same "n"
    int n;
    cin >> n;
    // int *arr = new int[n]; // for single row or 1D array

    //decleration of 2D arry
    int **arr = new int*[n]; 
    //2d array are int table form or multiple row so make rows we use for loop
    for(int i=0; i<n; i++){
        arr[i] = new int[n];
    }

    //creation done



    //taking input in 2D array
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }


    //output in 2D array
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;

    }


   return 0;
}
*/



//CODE FOR DIFFERENT ROWS(n) AND COLOUM(m)
#include<iostream>
using namespace std;
int main() {
    int n , m;  //"n" no. of rows and "m" for no. of coloum
    cin >> n >> m;

    // creation of 2d array
    int **arr = new int*[n]; //  ye row print karvayega
    for(int i=0; i<n; i++){ // ab coloum chaiya row ke accross
        arr[i] = new int[m]; 
    }
    
    //taking input 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];

        }
    }


    // print output
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";

        }
        cout << endl;
    }


    //RELEASE memory
    //first releASE MEMORY in row means arr
    for(int i=0; i<n; i++){

        delete [] arr[i];
    }
    delete []arr;    
}
