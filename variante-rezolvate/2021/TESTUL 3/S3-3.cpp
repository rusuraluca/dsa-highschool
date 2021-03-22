#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");

struct {
    int z;
    int nr;
} v[10];

int n, x, maxi;

int main(){
    while(fin >> x){
        n++;
        v[x/10%10].z++;
        v[x/10%10].nr = n;
        if(v[x/10%10].z >= maxi)
            maxi = v[x/10%10].z;
            
    }
    
    for(x = 0; x <= 9; x++)
        if(v[x].z == maxi)
            cout << v[x].nr << " ";
    
    fin.close();
    return 0;
}