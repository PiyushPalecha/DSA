#include<iostream>
using namespace std;
void update(int n) {
    n++;
}
int main() {
    int n = 5;
    cout << " before " << n << endl;
    update(n);
    cout << " After " << n << endl;
    return 0;
    //note :--> output dono me same areha hai kyo ki pass by value hai yee isme copy create hoti hai


    
}


/*
#include<iostream>
using namespace std;
void update2(int  &n) { // is bar hamne reference variable bana diya hai
    n++;
}
void update1(int  n) {
    n++;
}
int main() {
    int n = 5;
    cout << "Before " << n << endl;
    update2(n);
     cout << "After " << n << endl;
     return 0;

}
*/