#include <iostream>

using namespace std;

int main (){
    //citire
    int n, a[1005], k, aux;
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    cin >> k;
    
    
    //permutare spre stanga cu k element
    aux=a[1];
    for(int i=1; i<n; i++)
        a[i]=a[i+1];
    a[n]=aux;
    
        
    //verificare palindrom
    bool ok = 1;
    for(int i=1; i<=n/2; i++)
        if(a[i] != a[n+1-i])
            ok = 0;
            
    if(ok) cout << "DA";
    else cout << "NU";
    
    return 0;
}