#include <iostream>
#include <fstream>

using namespace std;

ifstream in("numere.in");

int main() { 
    int x, cpy;
    while(in >> x){
        cpy = x;
        while (((x % 2) == 0) && x > 1)
            x /= 2;
        if(x == 1) cout << cpy << " ";
    }
    return 0;
}