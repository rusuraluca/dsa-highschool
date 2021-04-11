#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");

int main(){
    int x, v[105];
    while(fin >> x){
        if(x >= 10 && x <= 99)
            v[x] = 1;
    }
    
    int k = 0;
    int n = 99;
    while(n >= 10 && k < 2){
        if(v[n] == 0 && k == 0 && n/10 != n%10){
            v[k] = n;
            k = 1;
        }else if(v[n] == 0 && k == 1 && n/10 != n%10){
            v[k] = n;
            k = 2;
        }
        n--;
    }
    
    if(k == 2) cout << v[0] << " " << v[1];
    else cout << "nu exista";

    return 0;
}
