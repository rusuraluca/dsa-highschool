#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ofstream fout("bac.txt");

int main(){
    int x, y;
    cin >> x >> y;
    
    fout << y << " " << x << " ";
    
    int n=0;
    
    while(n != 1){
        n = 3*x-y;
        fout << n << " ";
        y = x;
        x = n;
    }
    
    fout << 1;

    return 0;
}