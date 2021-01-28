#include <iostream>
#include <cmath>

using namespace std;

int n, d, p;

void putere(int n, int& d, int& p){
    d = 2;
    p = 0;
    int dmax, pmax = 0;
    while(n > 1){
        while(n % d == 0){
            n = n / d;
            p = p + 1;
        }
        if(p != 0){
            if(p >= pmax){
                pmax = p;
                dmax = d;
            }
        }
        d = d + 1;
        p = 0;
    }
    d = dmax;
    p = pmax;
}


int main(){
    cin >> n;
    putere(n, d, p);
    cout << d << " " << p;
    return 0;
}