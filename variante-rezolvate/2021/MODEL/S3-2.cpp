#include <iostream>

using namespace std;

int main(){
    int m, n, a[105][105];
    cin >> m >> n;
    int p=0;
    for(int i=m; i>=1; i--){
        for(int j=n; j>=1; j--){
            a[i][j] = p*p;
            p+=2;
        }
    }
    
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
    
    return 0;
}