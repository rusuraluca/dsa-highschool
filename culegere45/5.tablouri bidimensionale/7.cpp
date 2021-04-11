#include <iostream>

using namespace std;

int main() { 
    int m, n, a[105][105];
    cin >> m >> n;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }    
    
    int cnt=0;
    for(int j=1; j<=n; j++){
        bool ok = 1;
        for(int i=1; i<=m; i++){
            if(a[i][1] == a[i][j])
                ok = 0;
        }
        if(ok) cnt++;
    }  
    cout << cnt;
  
    return 0;
}