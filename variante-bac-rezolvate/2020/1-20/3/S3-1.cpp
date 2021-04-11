#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

int factori(int n, int m){
    int cnt=0;
    
    while(n%2==0 && n%2==0){
        cnt++;
        n/=2;
        m/=2;
    }
    
    int minn = min(sqrt(n), sqrt(m));
    
    for(int i=3; i <= minn; i+=2){
        while(n%i==0 && m%i==0){
            cnt++;
            n/=i;
            m/=i;
        }
    }
    
    //numere prime mai mari ca 2
    if(n==m && n>2){
        return 1;
    }
    
    return cnt;
}

int main(){
    int n=7, m=7;
    cout << factori(n,m);
}