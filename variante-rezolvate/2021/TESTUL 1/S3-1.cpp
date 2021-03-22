#include <iostream>

using namespace std;

void divX(int n, int x){
    int nr = x * n;
    while(nr){
        cout << nr << " ";
        nr-=x;
    }
}

int main(){
    int n, x;
    cin >> n >> x;
    divX(n, x);

    return 0;
}
