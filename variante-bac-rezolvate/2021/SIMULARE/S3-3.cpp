#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.in");

int x, sum, f[105];

int main() {
    while(fin >> x){
        f[x]++;
    }
    
    for(x=1; x<=10; x++){
        if(f[x] > 0){
            sum += 10;
            sum += ((x*x)*f[x]);
        }    
    }
    cout << sum;

    return 0;
}
