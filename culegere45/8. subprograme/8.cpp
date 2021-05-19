#include <iostream>

using namespace std;

int n, m, linie1, linie2, a[105][105];
    
void interschimbare(int n, int m, int linie1, int linie2, int a[105][105]){
    int aux = 0;
    for(int j=1; j<=m; j++){
        aux = a[linie1][j];
        a[linie1][j] = a[linie2][j];
        a[linie2][j] = aux;
    }
}

int main(){
    cin >> n >> m >> linie1 >> linie2;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin >> a[i][j];
        
    interschimbare(n, m, linie1, linie2, a);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
