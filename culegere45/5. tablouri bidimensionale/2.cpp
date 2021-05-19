#include <iostream>

using namespace std;

int main() { 
    int m, n, a[105][105];
    cin >> m >> n;

    int s = 0;
    for(int i=1; i<=m; i++){
        int maxx = 0;
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
            if(a[i][j] >= maxx){
                maxx = a[i][j];
            }
        }
        s+=maxx;
    }
    
    cout << s;
  
    return 0;
}