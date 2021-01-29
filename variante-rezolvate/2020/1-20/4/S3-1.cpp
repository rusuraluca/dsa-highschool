#include <cstring>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <fstream>

using namespace std;

void generatoare(int n){
    
    int a, b;
    for(int a=2; a<=n; a+=2){
        b = 1;
        while ( a*b + a/b < n )
            b++;  
        
        if ( a*b + a/b == n )
            cout << a << '-' << b << ' ';
    }
}

int main(){
    int n;
    cin >> n;
    generatoare(n);
}