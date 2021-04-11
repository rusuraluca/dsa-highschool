#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int m, n, sala[25][25];
    cin >> m >> n;
    
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cin >> sala[i][j];
        }
    }
    
    bool ok = 0;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(sala[i][1] == sala[j][n] && sala[i][1] != 0){
                ok=1;
                cout << sala[i][1] << " ";
            }
        }
    }
    if(ok == 0) cout << "nu exista";
    
    return 0;
}