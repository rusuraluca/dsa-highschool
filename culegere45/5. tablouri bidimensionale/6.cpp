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
    
    for(int i=1; i<=m; i++){
        bool ok = 1;
        for(int j=2; j<=n; j++){
            if(a[i][1] != a[i][j])
                ok = 0;
        }
        if(ok) cout << i << " " << a[i][1] << endl;
    }  
  
    return 0;
}