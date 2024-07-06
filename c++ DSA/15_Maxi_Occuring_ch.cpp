// jo character  sabse jada bar repeat ho reha hai use print karva na hai  

//agar 2 char same bar areha hai to ye jo second time repeat ho reha hai vo return karga (means jo element last time repeat hua ho ga vo)

#include<iostream>
using namespace std;
char getMaxOccCharacter(string s){
    int arr[26] = {0};

    //create an array of count  of character 
    for(int i=0; i<s.length(); i++){
        char ch = s[i]; // kons char kitni bar areha hai

        //lower case 
        int number = 0;
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';  // ye count dega ki kon kitni bar areha hai 
        }
        else{//upper case
        number = ch - 'A';  
        }
        
        arr[number]++;

    }
    int maxi = -1, ans = 0; // hum ko maxi wala char chaiya 
    for(int i=0; i<26; i++){
        if(maxi < arr[i]){  // jo sab  se max hai use ans me dal do
            ans = i;
            maxi = arr[i];
        }
    }
    // char finalAns = 'a' + ans;  
    // return finalAns;   //hum chaye to ye bhi likh sakte hai
    return 'a' + ans; // hame char me answer chaiya is liya 'a' add kiya
}
int main(){
    string s;
    cin >> s;
    cout << getMaxOccCharacter(s) << endl;
    return 0;

} 
// i/p----> test 
// o/p ----> t

//i/p---->testsample
//o/p----> e
// jai sagad ji bavji 
