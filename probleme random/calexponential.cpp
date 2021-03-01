#include <iostream>
#include <string>

//find the last four digits of x^n

using namespace std;

int exponent(int b, int n){
  //base case when n is 1
  if (n == 1) {
    return b;
  }
  
  // case when n is even
  if(n % 2 == 0) {
    int x = exponent(b, n / 2);
    return (x * x) % 10000;
  }
  
  // case when n is odd
  else {
    int x = exponent(b, (n - 1) / 2);
    return (x * x * b) % 10000;
  }
}

int main(){
    int b, n;
    cin >> b >> n;
    cout << exponent(b,n);
}
