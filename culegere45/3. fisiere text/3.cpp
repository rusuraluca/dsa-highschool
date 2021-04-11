#include <iostream>
#include <fstream>

using namespace std;

ifstream in("numere.in");

int main() { 
    int x, y;
    in >> x;
    while(!in.eof()){
        in >> y;
        if(x != y){
            cout << x << " ";
            if(in.eof()){
                cout << y;
            }
        }
        x = y;
    }
    return 0;
}