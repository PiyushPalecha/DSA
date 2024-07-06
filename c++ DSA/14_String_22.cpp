//Que--->> calculate length of string


#include<iostream>
using namespace std;
int getlength(char name[]){
    int count = 0;
    for(int i=0 ; name[i] != '\0'; i++){
        count ++;

    }
    return count;
}
int main(){
    char name[20] ;
    cout << "enter your name" << endl;
    cin >> name;

    cout << "your name is " << name << endl;
    cout << " Length of string " <<getlength(name) << endl;
    return 0;
}



//QUE-> check palindrome or not , reverse a string and getlength of string------------------------------------

//REVERSE an  string and check Palindrom or not

/*

#include <iostream>
using namespace std;

// Function to convert a character to lowercase
char toLowerCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch; // If it's already in lowercase, return as is
    } else {
        char temp = ch - 'A' + 'a';
        return temp; // Convert uppercase to lowercase
    }
}

// Function to check if a string is a palindrome
bool checkPalindrome(char a[], int n) {
    int s = 0;
    int e = n - 1;
    while (s <= e) {
        if (toLowerCase(a[s]) != toLowerCase(a[e])) {
            return false;
        } else {
            s++;
            e--;
        }
    }
    return true;
}

// Function to reverse a string
void reverse(char name[], int n) {
    int s = 0;
    int e = n - 1;
    while (s <= e) {
        swap(name[s], name[e]);
        s++;
        e--;
    }
}

// Function to get the length of a string
int getLength(char name[]) {
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char name[20];
    cout << "Enter your name: ";
    cin >> name;

    cout << "Your name is " << name << endl;
    int len = getLength(name);
    cout << "Length of string: " << len << endl;

    reverse(name, len);
    cout << "Your name reversed is " << name << endl;

    if (checkPalindrome(name, len)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    // You can't call the toLowerCase function with just one argument. 
    // You need to provide the character and store the result in a variable.
    char character = 'B';
    char lowercaseChar = toLowerCase(character);
    cout << "Character in lowercase: " << lowercaseChar << endl;

    return 0;
}

*/


//Que--> to reverse a string using recursion-----------------------------------------------------------------
/*
#include<iostream>
using namespace std;
void reverse(string &str, int s, int e){
    if(s>=e){
        return;
    }
    swap(str[s], str[e]);
    s++;
    e--;

    //recursive call
    reverse(str, s, e);

}
int main(){
    string name  = "piyush";
    reverse(name, 0, name.length() - 1);
    cout << name << endl;
    return 0;

}
*/



/*
//QUE:--> Palindrome using recursion
#include<iostream>
using namespace std;
bool checkPalindrome(string &str, int s, int e){
    if(s>=e){
        return 1;
    }
    if(str[s] != str[e]){
        return 0;
    }
    else{
        return checkPalindrome(str, s++, e--);
    }

}
int main(){
    string str = "nitin";
    checkPalindrome(str,0, str.length()-1);
    cout<< str << endl;
    return 0;

}
*/