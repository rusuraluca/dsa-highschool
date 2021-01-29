#include <cstring>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <fstream>

using namespace std;

int baza(int n){
    if (n==0) return 2;
    
    int maxx = 0;
    while(n){
        if(n % 10 > maxx){
            maxx = n % 10;
        }
        n/=10;
    }
    return maxx+1;
}

int main(){
    int n;
    cin >> n;
    cout << baza(n);
    return 0;
}