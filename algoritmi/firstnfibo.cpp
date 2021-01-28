#include <iostream>

using namespace std;

void nfibo(int n) { 
    if (n <= 0) cout << 0; 
  
    int fibo = 0, fibo1 = 1, fibo2; 
  
    cout << fibo << " " << fibo1 << " "; 
  
    for (int i=2; i<=n; i++) { 
        fibo2 = fibo + fibo1; 
        cout << fibo2 << " ";
        fibo = fibo1;
        fibo1 = fibo2;
    } 
} 

int main() { 
    int n;
    cin >> n;
    nfibo2(n); 
  return 0; 
} 
