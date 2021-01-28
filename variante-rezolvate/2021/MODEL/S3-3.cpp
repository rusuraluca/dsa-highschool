#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("cheltuieli.in");

int f[105];

int main(){
    int t, n, p;
    int maxx=0;
    f[0]=0;
    while(fin >> t >> n >> p){
        f[t] += n*p;
        if(f[t] > maxx){
            maxx = f[t];
            f[0]=1;
        } else if(f[t] == maxx){
            f[0]++;
        }
    }
    
    cout << maxx << " " << f[0];
    
    return 0;
}