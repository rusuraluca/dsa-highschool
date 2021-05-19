#include <iostream>
using namespace std;

int suma_cifre(int n){
    int s, f, i;
    s = 0;
    while(n){
        f = 1;
        for(int i=2; i<=n%10; i++)
            f*=i;
        s+=f;
        n=n/10;
    }
    return s;
}

int main(){
    int n;
    cin >> n;
    cout << suma_cifre(n);
}