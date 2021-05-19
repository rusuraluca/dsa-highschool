#include <iostream>

using namespace std;

int main() {
    int m, n, a[i][j];
    cin >> m >> n;
    for(int i=1; i<=m; i++)
        for(int j=1; i<=n; j++)
            cin >> a[i][j];
    for(int j=1; j<m; j++) 
        for(int j=2; j<=n; j++) 
            if(a[1][j]==a[i][n])
                cout << a[1][j] << " ";

    return 0;
}
