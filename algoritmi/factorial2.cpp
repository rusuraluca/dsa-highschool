#include <iostream>
#include <limits>

using namespace std;

int fact_dp_bu(int n)//factorial calculat prin programare dinamica, abordare de jos in sus (bottom-up)
{
    int result[n];
    if (n >= 0) {
        result[0] = 1;
        for(int i=1; i<=n; ++i) {
            result[i] = i * result[i-1];
        }
        return result[n];
    }
    else {
        return numeric_limits<int>::min();
    }
}

int factorial[100];

int fact_dp_td(int n)//factorial calculat prin programare dinamica, abordare de sus in jos (top-down)

{
    if (n < 0)
        return numeric_limits<int>::min();
    if (factorial[n] > 1)
        return factorial[n];
    if (n == 0 || n == 1)
        return 1;
    factorial[n] = n * fact_dp_td(n-1);
    return factorial[n];
}

int fact_recursion(int n)//factorial calculat recursiv
{
    if (n == 0)
        return 1;
    else
        return n * fact_recursion(n-1);

}

int fact_iteration(int n)//factorial calculat iterativ
{
    if (n >= 0) {
        int result = 1;
        for(int i=1; i<=n; ++i) {
            result = result * i;
        }
        return result;
    }
    else {
        return numeric_limits<int>::min();
    }
}

int main(int argc, char* argv[])
{
    int n;
    cout << "n=";
    cin >> n;
    cout << n << "! calculat prin programare dinamica, abordare bottom-up=" << fact_dp_bu(n) << endl;
    cout << n << "! calculat prin programare dinamica, abordare top-down=" << fact_dp_td(n) << endl;
    cout << n << "! calculat recursiv=" << fact_recursion(n) << endl;
    cout << n << "! calculat iterativ=" << fact_iteration(n) << endl;
    return 0;
}
