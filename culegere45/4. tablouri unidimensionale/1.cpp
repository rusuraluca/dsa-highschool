#include <iostream>
#include <fstream>

using namespace std;

ifstream in("numere.in");

int main() { 
    int n, v[105];
    in >> n;
    for(int i=1; i<=n; i++){
        in >> v[i];
    }
   
    int aux;
    
    aux = v[n/2];
    for(int i = n/2; i > 1; i--)
        v[i] = v[i-1];
    v[1] = aux;
    
    aux = v[n/2+1];
        for(int i = n/2+1; i < n; i++)
            v[i]=v[i+1];
    v[n] = aux;
    
    for(int i=1; i<=n; i++){
        cout << v[i];
    }
    
    return 0;
}