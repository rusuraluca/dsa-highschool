#include <iostream>
using namespace std;

int n, k, a[25][25];

int putere(int n) {
    int d, p, minp=999999999, minn=0;
    
    d = 2;
    while(n > 1){
        p = 0;
        while(n % d == 0){
            ++p;
            n /= d;
        }
        if(p < minp && p!=0){
            minp = p;
            minn = d;
        }
        ++d;
    }

    return minn;
}

int main() {
    cin >> n;
    cout << putere(n);
    return 0;
}
