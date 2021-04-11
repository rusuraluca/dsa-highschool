#include <iostream>

using namespace std;

int main() { 
    int m, n, a[105][105], aux;
    cin >> n;
    for(int j=1; j<=n; j++){
        cin >> a[1][j];
    }
    
    for(int i=2; i<=n; i++){
        aux = a[i-1][1];
        for(int j=1; j<n; j++){
            a[i][j] = a[i-1][j+1];
        }
        a[i][n] = aux;
    }
    
    for(int j=1; j<=n; j++){
        for(int i=1; i<=n; i++){
            cout << a[i][j];
        }
        cout << endl;
    }

  
    return 0;
}