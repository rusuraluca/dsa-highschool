#include <fstream>

using namespace std;

ifstream cin("cmlsc.in");
ofstream cout("cmlsc.out");

const int maxn = 1030;

int n, m, a[maxn], b[maxn], dp[maxn][maxn];

inline void reconstr(int x, int y) {
    if(!x || !y)
        return ;
    if(a[x] == b[y]) {
        reconstr(x-1, y-1);
        cout << a[x] << ' ';
        return ;
    }
    if(dp[x-1][y] > dp[x][y-1])
        reconstr(x-1, y);
    else
        reconstr(x, y-1);
}

int main() {
    cin >> n >> m;
    for(int i=1; i<=n; ++i)
        cin >> a[i];
    for(int i=1; i<=m; ++i)
        cin >> b[i];
        
    for(int i=1; i<=n; ++i)
        for(int j=1; j<=m; ++j)
            if(a[i] == b[j])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
    cout << dp[n][m] << '\n';
    reconstr(n, m);
}