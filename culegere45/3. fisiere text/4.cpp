#include <iostream>
#include <fstream>

using namespace std;

ifstream in("numere.in");

int main() { 
    int n, x;
    in >> n;
    
    bool ok = 0;
    int l = 0;
    int lmax = 0;
    for(int i=1; i<=n; i++) {
        in >> x;
        if(x % 10 != 0) {
            ok = 0;
            if(l > lmax){
                lmax = l;
            }
        }
        if(x % 10 == 0 && ok == 0) {
            l = 1;
            ok = 1;
        } else if(x % 10 == 0 && ok == 1) {
            l++;
        }
    }
    
    cout << lmax;
    return 0;
}