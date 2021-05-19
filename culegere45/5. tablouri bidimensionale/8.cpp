#include <iostream>

using namespace std;

int main() { 
    int m, n, a[105][105];
    cin >> m >> n;
    
    int x=1;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(i % 2 != 0) a[i][j] = x++;
            else a[i][n-j+1] = x++;
        }
    }   
    
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}