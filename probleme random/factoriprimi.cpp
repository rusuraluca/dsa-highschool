#include <iostream>
#include <math.h>

using namespace std;

void factoriprimi(int n) {
    
    // Print the number of 2s that divide n  
    while (n % 2 == 0) {  
        cout << 2 << " ";  
        n = n/2;  
    } 
    
    // n must be odd at this point, so we can skip one element (Note i = i + 2)  
    for (int i = 3; i <= sqrt(n); i = i + 2) {  
        // While i divides n, print i and divide n  
        while (n % i == 0)  {  
            cout << i << " ";  
            n = n/i;  
        }  
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2)  
        cout << n << " ";  
    
}

int main (){
  int n;
  cin >> n;
  factoriprimi(n);
  return 0;
}
