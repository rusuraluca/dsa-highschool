#include <cstring>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main(){
    int x, s=0, smax=0;
    fin >> x;
    s = smax = x;
    while(fin>>x){
        if(s > 0)
           s = s + x;
        else
           s = x;
        if(s > smax)
           smax = s;
    }
    cout<<smax;
    
    return 0;
}