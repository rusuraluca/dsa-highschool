#include <iostream>
using namespace std;

void numere(int n, int v[],int& suma){
    int e, s;
    suma = 0;
    for(int i=1; i<=n; i++){
        e=v[i];
        s=0;
        while(e>9){
            s=s+(e%10);
            e=e/10;
        }
        if(e==s)
            suma+=v[i];
    }
    if(suma==0) suma=-1;
}

int main(){
    int n, v[100], sum;
    cin >> n;
    
    for(int i=1; i<=n; i++){
        cin >> v[i];
    }
    numere(n, v, sum);
    cout << sum;
    return 0;
}