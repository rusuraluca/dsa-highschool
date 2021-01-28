#include <iostream>
using namespace std;

void countsort(int a[], int n) {
  // The size of count must be at least the (max+1) but
  // we cannot assign declare it as int count(max+1) in C++ as
  // it does not support dynamic memory allocation.
  // So, its size is provided statically.
  int output[10];
  int count[10];
  int max = a[0];

  // Find the largest element of the array
  for (int i = 1; i < n; i++) {
    if (a[i] > max)
      max = a[i];
  }

  // Initialize count array with all zeros.
  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  // Store the count of each element
  for (int i = 0; i < n; i++) {
    count[a[i]]++;
  }

  // Store the cummulative count of each array
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  // Find the index of each element of the original array in count array, and
  // place the elements in output array
  for (int i = n - 1; i >= 0; i--) {
    output[count[a[i]] - 1] = a[i];
    count[a[i]]--;
  }

  // Copy the sorted elements into original array
  for (int i = 0; i < n; i++) {
    a[i] = output[i];
  }
}



int main() {
  int a[] = {4, 2, 2, 8, 3, 3, 1};
  int n = sizeof(a) / sizeof(a[0]);
  
  countsort(a, n);
  
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;
}