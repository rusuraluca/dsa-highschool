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

    int s = 0;
    for(int j=1; j<=n; j++){
        int minn = 1005;
        for(int i=1; i<=m; i++){
            cin >> a[i][j];
            if(a[i][j] < minn){
                minn = a[i][j];
            }
        }
        cout << minn << " ";
        s+=minn;
    }
    
    cout << s;
  
    return 0;
}