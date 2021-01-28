#include <iostream>
#include <cmath>

using namespace std;

int n, d, p;

int f[105];

void putere(int n, int& d, int& p){
    p = 0;
    while(n % 2 == 0){
        f[2]++;
        n = n / 2;
    }
    for( int i=3; i <= sqrt(n); i+=2)
        while (n % i == 0)  {
            f[i]++;
            n = n / i;  
        }  

    if (n > 2)  
        f[n]++;
    
    for(int i=1; i<=n; ++i){
        if(f[i] >= p) {
            d = i;
            p = f[i];
        }
    }
}


int main(){
    cin >> n;
    putere(n, d, p);
    cout << d << " " << p;
    return 0;
}