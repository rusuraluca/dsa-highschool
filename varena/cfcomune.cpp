#include <fstream>
using namespace std;

ifstream cin("cfcomune.in");
ofstream cout("cfcomune.out");

int fr1[10];
int fr2[10];


int main() {
    int x, cnt=0;
    cin >> x;
    
    while(x) {
        fr1[x%10]++;
        x = x / 10;
    }

    cin >> x;

    while(x){
        fr2[x%10]++;
        x = x / 10;
    }


    for(int i=0; i<=9; i++){
        if(fr1[i] != 0 && fr2[i] != 0)
            cnt++;
    }

    cout << cnt;
    return 0;
}