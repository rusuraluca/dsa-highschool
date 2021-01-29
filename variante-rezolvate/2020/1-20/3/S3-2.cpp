#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;


int main(){
    int n;
    cin >> n;
    int peste, sub;
    for(int i=1; i<=n; i++){
        peste = n-i;
        sub = 1;
        for(int j=1; j<=n; j++){
            if(i + j <= n + 1){
                cout << peste << " ";
                peste--;
            
            }else if(i + j > n + 1){
                cout << sub << " "; 
                sub++;
            }
        }
        cout << '\n';
    }
}