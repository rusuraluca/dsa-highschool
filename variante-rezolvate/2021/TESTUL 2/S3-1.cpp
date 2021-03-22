#include <iostream>
#include <fstream>

using namespace std;

int factori(int n, int m){
    int cntn=0, cntm=0, f=0;
    while(n % 2 == 0){ 
        cntn++;
        n = n/ 2;
    }
    
    while(m % 2 == 0){ 
        cntm++;
        m = m/ 2;
    }
    if (cntn == cntm){
        f++;
    }
    
    for(int i=3; i*i<=n; i+=2){
        cntn = 0;
        while(n % i == 0){
            cntn++;
            n /= i;
        }
    }
    
    for(int i=3; i*i<=m; i+=2){
        cntm = 0;
        while(m % i == 0){
            cntm++;
            m /= i;
        }
    }
    
    if (cntn == cntm){
        f++;
    }
    
    if(n>2 && m>2 && n==m){
        f++;
    }
    
    return f;
}

int main(){
    int n, m;
    cin >> n >> m;
    cout << factori(n, m);
    return 0;
}
