#include <fstream>
using namespace std;

ifstream cin("culori.in");
ofstream cout("culori.out");

int fr[100];

int main() {
    int n, x;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> x;
        fr[x]++;
    }


    for(int i = 1; i <= 99; i++) {
        for(int j = 1; j <= fr[i]; j++)
            if(fr[i] != 0) 
                cout << i <<" ";
    }

    return 0;
}