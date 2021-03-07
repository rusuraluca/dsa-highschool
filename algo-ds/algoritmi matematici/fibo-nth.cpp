#include <iostream>
#include <limits>

using namespace std;

int fibonacci_dp_bu(int n)//fibonacci calculat prin programare dinamica, abordare de jos in sus (bottom-up)
{
    int fib[n];
    fib[1] = 1;
    fib[2] = 1;
    for (int j=3; j<=n; ++j)
      fib[j] = fib[j-1] + fib[j-2];
    return fib[n];
}

int saveFib[100];

int fibonacci_dp_td(int n)//fibonacci calculat prin programare dinamica, abordare de sus in jos (top-down)
{
    if (saveFib[n] > 0)
        return saveFib[n];
    if (n <= 1)
        return n;
    saveFib[n] = fibonacci_dp_td(n-1) + fibonacci_dp_td(n-2);
    return saveFib[n];
}

int fibonacci_recursion(int n)//fibonacci calculat recursiv
{
    if (n <= 2)
        return 1;
    else
        return fibonacci_recursion(n-1) + fibonacci_recursion(n-2);
}

int fibonacci_iteration(int n)//fibonacci calculat iterativ
{
    int previous = 1;
    int current = 1;
    int next = 1;
    for (int i = 3; i <= n; ++i) {
        next = current + previous;
        previous = current;
        current = next;
    }
    return next;
}

int main(int argc, char* argv[])
{
    int p;
    cout << "p=";
    cin >> p;
    cout << "termenul " << p << " din sirul Fibonacci calc. prin prog. dinamica, abordare bottom-up=" << fibonacci_dp_bu(p) << endl;
    cout << "termenul " << p << " din sirul Fibonacci calc. prin prog. dinamica, abordare top-down=" << fibonacci_dp_td(p) << endl;
    cout << "termenul " << p << " din sirul Fibonacci calc. recursiv=" << fibonacci_recursion(p) << endl;
    cout << "termenul " << p << " din sirul Fibonacci calc. iterativ=" << fibonacci_iteration(p) << endl;
    return 0;
}
