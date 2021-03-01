#include <iostream>
#include <math.h>

using namespace std;

int sumnfibo(int n) { 
    if (n <= 0) 
       return 0; 
  
    int fibo[n+1]; 
    fibo[0] = 0, fibo[1] = 1; 
  
    int sum = fibo[0] + fibo[1]; 
  
    for (int i=2; i<=n; i++) { 
        fibo[i] = fibo[i-1]+fibo[i-2]; 
        sum += fibo[i]; 
    } 
  
    return sum; 
} 

int main() { 
    int n;
    cin >> n;
    cout << sumnfibo(n); 
  return 0; 
} 
