#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

void fii(int n){
    for(int i=1; i*i <= n; i++)
        if(n % i == 0)  
            cout << "(" << n/i << " " << i << ")" << " ";
}

int main(){
    int n;
    cin >> n;
    fii(n);
    return 0;
}