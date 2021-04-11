#include <iostream>
#include <fstream>

using namespace std;

ifstream in("numere.in");

int main() { 
    int a, b, s, cpy;
    in >> a >> b;
    for(int i=a; i<=b; i++){
        cpy = i;
        s = 0;
        while(cpy){
            s += cpy % 10;
            cpy /= 10;
        }
        
        if((i / s) == (i % s)) cout << i << " "; 
    }
    
    return 0;
}