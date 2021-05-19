#include <iostream>

using namespace std;

int main() { 
    int x, n, a[105][105];
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }    
    cin >> x;
    
    int nr = 0;
    for(int k=2; k<n; k++){
        if(a[1][k] % x == 0) nr++;
        if(a[k][1] % x == 0) nr++;
        if(a[n][k] % x == 0) nr++;
        if(a[k][n] % x == 0) nr++;
    }
    if(a[1][1] % x == 0) nr++;
    if(a[1][n] % x == 0) nr++;
    if(a[n][1] % x == 0) nr++;
    if(a[n][n] % x == 0) nr++;
    
    cout << nr;
  
    return 0;
}