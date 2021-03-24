#include <iostream>
using namespace std;

int n, k, a[25][25]; 

int putere(int n) {
    int p, minp=999999999, minn=0;
    
    p=0;
    while(n % 2 == 0){
        p++;
        n/=2;
    }
    if(p < minp && p!=0){
        minp = p;
        minn = 2;
    }
    
    for(int i=3; i*i<=n; i+=2){
        p=0;
        while(n % i == 0){
            p++;
            n/=i;
        }
        if(p < minp && p!=0){
            minp = p;
            minn = i;
        } else if(p == minp && i < minn){
            minp = p;
            minn = i;    
        }
    }
    return minn;
    
}

int main() {
    cin >> n;
    cout << putere(n);
    return 0;
}
