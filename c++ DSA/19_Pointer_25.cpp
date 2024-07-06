/*
#include<iostream>
using namespace std;
int main() {
    int num = 9;
    cout << num << endl;
     cout <<"address of num :" << &num << endl ;
     int *ptr = &num;
     cout << "value is :" << *ptr << endl;
     cout <<"Address of ptr: "<< ptr << endl;
    
     return 0;
}*/

//sum Using pointer
/*
#include<iostream>
using namespace std;
int main() {
    int x;
    int y;

    cin >> x >> y;
    // pointer banaya or usme x and y ka address store karvaya
    int *ptrx = &x;
    int *ptry = &y;
    int result;

    int *ptr_result = &result;
    *ptr_result = *ptrx + *ptry;
    cout << result << endl;
    return 0;



}
*/

//Pointer and function
/*
#include<iostream>
using namespace std;

void update(int **p2) {
        **p2 = **p2 + 1; //p2 = p2 + 1; --> isko use karne se value update nhi ho rahi hai 
}
        

int main() {
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    std ::cout << "before: " << i << endl;
    std ::cout << "before: " << p << endl;
    std ::cout << "before: " << p2 << endl;

    std ::cout << endl << endl ;

    update(p2);
    std ::cout << "After: " << i << endl;
    std ::cout << "After: " << p << endl;
    std ::cout << "After: " << p2 << endl;
    return 0; 
}
*/

#include <iostream>
using namespace std;
int main(){
    int f = 100;
    int *p = &f;
    int **q = &p;
    int s = ++(**q);
    int *r = *q;
   // +*(*r);
    cout << f << endl << s << endl;
    return 0;   //---->//o/p= 101    101

       /* int i = 5;
       int &j = i;
       i++;
       j++;
       
       
       cout << i << endl << j <<endl;    
       return 0;    
       */                 
}