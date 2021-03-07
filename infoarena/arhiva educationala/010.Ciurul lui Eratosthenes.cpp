#include <vector>
#include <fstream>
#include <bitset>

using namespace std;

ifstream cin("ciur.in");
ofstream cout("ciur.out");

const int maxn = 2000005;

int n;
bitset <maxn> used;

int main() {
    cin >> n;
    int cnt = 1;
    for(int i=3 ; i<=n ; i+=2) {
        if(used[i])
            continue;
        ++cnt;
        for(int j=i+i; j<=n; j+=i)
            used[j] = 1;
    }
    cout << cnt << '\n';
}