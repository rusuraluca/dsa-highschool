#include <iostream>

using namespace std;

int main(){
    int n, a[105][105];
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i=1; i<=n; i++){
        cout << a[i][1] << " ";
    }
    
    for(int i=2; i<=n; i++){
        cout << a[n][i] << " ";
    }
    
    for(int i=n-1; i>=1; i--){
        cout << a[i][n] << " ";
    }
    
    for(int i=n-1; i>=2; i--){
        cout << a[1][i] << " ";
    }

    return 0;
}
