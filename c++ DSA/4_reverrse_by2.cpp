//code to print reverse an array in alternate order 2468-->4286 like orders
#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){  //humne i+2 isliya kiya taki humne second elem. ko swap kiya vapas usko third element se swap na kar de 
        if(i+1 < size){ // means dono ko swap kardiya pass wale element
            swap(arr[i], arr[i+1] );
        }

    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int even[6] = {2,8,16,32,40,22};
    int odd[5]= {5,6,3,5,3};
    
    swapAlternate(even,6);
    printArray(even,6);

    swapAlternate(odd,5);
    printArray(odd,5);
    return 0;

}

