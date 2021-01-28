#include <iostream>

using namespace std;

//Complexitate căutare binară: O(logn).

int CautareBinara(int a[], int x, int st, int dr) {
    if (st >= dr - 1) {
        return dr;
    } else {
        int m = (st + dr) / 2;
        if (x <= a[m]) {
            return CautareBinara(a, x, st, m);
        } else {
            return CautareBinara(a, x, m, dr);
        }
    }
}

int CautareBinara1(int a[], int x, int n) {
    if (x <= a[1])
        return 1;
    if (x >= a[n])
        return n;
    else
        return CautareBinara(a, x, 1, n);
}

int main (){
  int n, a[105], x;
  cin >> n;
  for(int i=1; i<=n; ++i){
      cin >> a[i];
  }
  cin >> x;
  cout << CautareBinara1(a, x, n);
  return 0;
}
