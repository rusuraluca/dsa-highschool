#include <cstring>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int m, n, a[105][105];
    cin >> m >> n;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j]; 
        }    
    }
    
    int cnt=0;
    bool verif=true;
    
    for(int j=2; j<=n; j++){
        bool verif=true;
        for(int i=1; i<=m; i++)
            if(a[i][1] == a[i][j])
                verif = false;
        if(verif==true) cnt++;
    }
    cout << cnt;
}