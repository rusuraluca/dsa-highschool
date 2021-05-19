#include <iostream>

using namespace std;

int main (){
    int n, x, cx;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x;
        cx = x;
        x = x + 1;
        while(x % 2 == 0){
            x /= 2;   
        }
        if(x == 1) cout << cx << " ";
    }
    return 0;
}