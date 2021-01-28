#include <iostream>

using namespace std;

//Counting Sort О(n2) 

void selectionsort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;  
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main() {
    int n, a[105];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    selectionsort(a, n);
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}

