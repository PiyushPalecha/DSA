
#include<iostream>
using namespace std;
int main() {
    int arr[10] = {2,5,6};
    cout << "Address of first memory block: " << arr << endl;
    cout << "Address of first memory block: " << arr[0] << endl;
    cout << "Address of first memory block: " << &arr[0] << endl;
    cout << "Address of first memory block: " << *arr << endl; // *arr indicate first index value 
    cout << "5th: " << *arr + 1 << endl;  //*arr(means first index position ko add karna hai 1 ke sath)
    cout << "6th: " << *(arr + 1) << endl;  //*aarr(first position of index) *1 means index ko ek age bada do 
    return 0;
}



/*
//Double pointer 
#include<iostream>
using namespace std;
int main() {
    int i =5; 
    int *ptr = &i;
    int **ptr2 = &ptr;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << **ptr2 << endl;
    cout << &**ptr2 << endl;
    cout << &*ptr << endl;
    return 0;
    

}

*/



