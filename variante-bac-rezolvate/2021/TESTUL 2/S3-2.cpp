#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int n, m[25][25];
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i+j <= n+1) 
                m[i][j] = i+j-1;
            else 
                m[i][j] = m[i][j-1]-1;
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
