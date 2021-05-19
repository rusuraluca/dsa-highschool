#include <iostream>

using namespace std;

int main() { 
    int n, x, m[105][105];
    cin >> n >> x;
    for(int i=1; i<=n; i++){ 
        m[1][i]=x;
        m[i][1]=x;
    }
    for(int i=2; i<=n; i++){
        for(int j=2; j<=n; j++){
            m[i][j]=m[i-1][j] + m[i][j-1];
        }
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << m[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}