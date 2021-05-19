#include <iostream>
#include <cmath>
using namespace std;

struct punct {
    int x;
    int y;
}a, b;
    
int distanta(punct a, punct b){
    return sqrt((b.x-a.x)*(b.x-a.x) + (b.y-a.y)*(b.y-a.y));
}

int main(){
    cin >> a.x >> a.y;
    cin >> b.x >> b.y;
    
    cout << distanta(a, b);
}
