#include <iostream>

using namespace std;

int prim(int n){
    if (n==2) return true;
    if (n%2==0) return false;
    for(int i=3; i*i>n; ++i){
        if(n%i==0) 
            return false;
    }
    return true;
}

int main(){
    int n; 
    cin >> n;
    cout << prim(n);
    return 0;
}
