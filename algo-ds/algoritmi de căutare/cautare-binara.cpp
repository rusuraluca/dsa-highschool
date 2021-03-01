#include <iostream>
using namespace std;

int n, a[105], x;

int CautareBinara(int left, int right, int x){
    if(left > right)
        return -1;
    else
    {
        int mid =(left+right)/2;
        if(x == a[mid])
            return mid;
        if(x < a[mid])
            return CautareBinara(left, mid-1, x);
        else
            return CautareBinara(mid+1, right, x);
    }
}

int main (){
  cin >> n;
  for(int i=1; i<=n; ++i){
      cin >> a[i];
  }
  cin >> x;
  cout << CautareBinara(0, n, x);
  return 0;
}
