#include <iostream>
#include <string>

//sum array elements

using namespace std;

int sum(int a[], int n) { 
    if (n <= 0) 
        return 0; 
    return (sum(a, n-1) + a[n-1]); 
} 

int main(){
    int a[105], n;
    cin >> n;
    for(int i=0; i<n; ++i)
        cin >> a[i];
    cout << sum(a,n);
}
