#include <iostream>

using namespace std;

//Complexitate căutare secvenţială: O(n).

int cautareSecventiala(int x, int a[], int n){
    int poz = -1;
    int i = 0;
    while (i < n && poz == -1){
        if (a[i] == x)
    	    poz = i;
    	else
    	    i++;
    }
    return poz;
}

int main (){
  int n, a[105], x;
  cin >> n;
  for(int i=1; i<=n; ++i){
      cin >> a[i];
  }
  cin >> x;
  cout << cautareSecventiala(x, a, n);
  return 0;
}
