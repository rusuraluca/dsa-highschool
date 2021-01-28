#include <iostream>
#include <math.h>

using namespace std;

bool isPerfectSquare(int x){ 
    int s = sqrt(x); 
    return (s*s == x); 
} 
  
bool isFibonacci(int n) { 
    // n is Fibinacci if one of 5*n*n + 4 or 5*n*n - 4 or both 
    // is a perferct square 
    return isPerfectSquare(5*n*n + 4) || 
           isPerfectSquare(5*n*n - 4); 
} 
  
int main() { 
    int n;
    cin >> n;
    isFibonacci(n)? cout << n << " is a Fibonacci Number \n": 
                    cout << n << " is a not Fibonacci Number \n" ; 
  return 0; 
} 
