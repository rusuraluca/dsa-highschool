#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main() {
    int x, y, poz=1;
    fin >> x;
    while(fin >> y){
        if(y < x){
            poz++;
        }
    }
    cout << poz;
    
    fin.close();
    return 0;
}
