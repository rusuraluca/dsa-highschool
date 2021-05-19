#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;

ifstream fin("bac.txt");

int x, x1=INT_MAX, x2=INT_MAX, x3=INT_MAX;                                                                                                         

int main() {
    while(fin >> x){
        if(x%10 == 0 && x/10%10 == 2)  
            if(x<x1){
                x3=x2;
                x2=x1;
                x1=x;
            } else if(x<x2){
                x3=x2;
                x2=x;
            } else if(x<x3){
                x3=x;
            }
    }
    cout << x1 << " " << x2 << " " << x3;

    return 0;
}
