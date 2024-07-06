// condition ye hai ki position M de rekhi hai us position ke badd reverse karvana hai
/*
#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){   //function declaration 
    int s =  0, e = v.size() - 1;

    while(s <=e){
        swap(v[s], v[e]);
        s++;
        e--;   
     }
     return v;
  
}
void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}


int main(){
    vector<int> v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    //function call
    vector<int> ans =  reverse(v);

    cout << "Printing reverse array" << endl;
    print(ans);
    return 0;
}    


//Que --> Move zeros to the end 
*/
/*
#include<iostream>
#include<vector>
using namespace std;
void moveZeros(vector<int> &num){
    int nonzero = 0;
    for(int i=0; i<num.size(); i++){
        if(num[i] != 0){ //agar num zero ke equal nhi hai to swap karna hai 
            swap(num[i] , num[nonzero]);
            nonzero++;
        }
    }
}
int main(){
    vector<int> num = {0,1,0,3,12};
    //function call
    moveZeros(num);

    //print karva diya 
    for(int i=0; i<num.size(); i++){
        cout << num[i] << " ";
    }
    cout << endl;
    
    

}
*/

//OR withoutusing vector
#include <iostream>
using namespace std;

void moveZeros(int num[], int n) {
    int nonzero = 0;
    for (int i = 0; i < n; i++) {
        if (num[i] != 0) { //means number i is not zero then swap
            swap(num[i], num[nonzero]);
            nonzero++;
        }
    }
}

int main() {
    int num[] = {0, 21, 0, 3, 12};
    int n = sizeof(num) / sizeof(num[0]);

    // Function call
    moveZeros(num, n);

    // Print the array
    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}


    

