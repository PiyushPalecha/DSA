// #include <iostream>

// int calculateFibonacci(int number, int memoizationArray[]) {
//     if (number == 0 || number == 1) {
//         return number;
//     }
    
//     if (memoizationArray[number] != 0) {
//         return memoizationArray[number];
//     }
    
//     memoizationArray[number] = calculateFibonacci(number - 1, memoizationArray) + calculateFibonacci(number - 2, memoizationArray);
//     return memoizationArray[number];
// }

// int main() {
//     int number = 5;
//     int memoizationArray[number + 1] = {0}; // Initialize array with zeros
//     std::cout << "Fibonacci number at position " << number << " is: " << calculateFibonacci(number, memoizationArray) << std::endl;
//     return 0;
// }

///or

#include <iostream>
#include <vector>
using namespace std;

class Classroom {
public:
    static int fib(int n, vector<int>& f) {
        if (n == 0 || n == 1) {
            return n;
        }
        
        if (f[n] != 0) {
            return f[n];
        }
        
        f[n] = fib(n - 1, f) + fib(n - 2, f);
        return f[n];
    }
};

int main() {
    int n = 5;
    vector<int> f(n + 1, 0);
    cout << Classroom ::fib(n, f) << endl;
    return 0;
}
