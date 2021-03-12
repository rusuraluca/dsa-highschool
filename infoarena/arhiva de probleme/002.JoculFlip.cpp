#include <fstream>

using namespace std;

ifstream cin("flip.in");
ofstream cout("flip.out");

int n, m, a[17][17];
long long maxim = -1000000;
int takec[17];

long long calculez(){
    long long sum = 0;
    for(int i = 0; i < n; ++i) {
        long long s = 0;
        for(int j = 0; j < m; ++j)
            s += (a[i][j] * takec[j]);
        sum += abs(s);
    }
    return sum;
}

void backtracking(int x) {
    if(x == m) {
       if( calculez() > maxim )
            maxim = calculez();
    } else {
        takec[x] = 1;
        backtracking(x + 1);
        takec[x] = -1;
        backtracking(x + 1);
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> a[i][j];
    backtracking(0);
    cout << maxim;

}