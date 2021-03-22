#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int m, n, t[105][105];  
    cin >> m >> n;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){ 
            cin >> t[i][j];
        }
    }
    
    for(int i=1; i<=m; i++){
        int maxx = 0;
        bool ok = 0;
        for(int j=1; j<=n; j++){
            if(t[i][j] > maxx && t[i][j] < 21){
                maxx = t[i][j];
                ok = 1;
            }    
        }
        if(ok == 1) cout << maxx << '\n';
        else cout << "nu exista" << '\n';
    }
    
    return 0;
}