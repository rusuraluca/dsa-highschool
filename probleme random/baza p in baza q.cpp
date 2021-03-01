#include <iostream>
#include <iostream>

using namespace std;

int main(){
	int np, p ,q, putere=1, n10=0, uc,nq=0,rest;
	cin >> p;
	cin >> q;
	cin >> np;

    while(np){
        uc = np - (np / 10) * 10;
        n10 = n10 + uc * putere;
        putere = putere * p;
        np = (np / 10);
    }
    putere=1;
    while(n10){
        rest = n10 - (n10 / q) * q;
        nq = nq + rest * putere;
        putere = putere * 10;
        n10 = (n10 / q);
    }
    
    cout << nq;
}