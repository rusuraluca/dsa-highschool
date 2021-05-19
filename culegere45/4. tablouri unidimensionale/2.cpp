#include <iostream>
#include <fstream>

using namespace std;

ifstream in("numere.in");

int main() { 
    int n, v[105], f[10]={0};
    in >> n;
    while(n){
        f[n%10]++;
        n/=10;
    }
    cout << "a. ";
    for(int i=9; i>=0; i--){
        for(int j=1; j<=f[i]; j++) 
            cout << i;
    }
    cout << endl;
    
    cout << "b. ";
    for(int i=9; i>=0; i--){
        if(f[i]) 
            cout << i;
    }
    return 0;
}