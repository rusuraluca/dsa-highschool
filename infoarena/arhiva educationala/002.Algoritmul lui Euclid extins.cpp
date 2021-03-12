#include <fstream>
#include <iostream>
 
std::ifstream fin("euclid3.in");
std::ofstream fout("euclid3.out");
 
int gcd(int a, int b, int &x, int &y){
  if (b == 0){
    x = 1, y = 0;
    return a;
  }
 
  int d, x0, y0;
  d = gcd(b, a % b, x0, y0);
  x = y0;
  y = x0 - (a / b) * y0;
  return d;
}
 
int main(){
  int t;
  fin >> t;
  while (t--){
    int a, b , c ,x , y;
    fin >> a >> b >> c;
 
    int d = gcd(a, b, x, y);
 
    if (c % d == 0){
      fout << x * (c / d) << ' ' << y * (c / d) << '\n';
    } else {
      fout << "0 0\n";
    }
  }
  return 0;
}