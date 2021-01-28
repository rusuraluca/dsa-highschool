#include <iostream>
using namespace std;

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int a[], int low, int high) {
  // Select the pivot element
  int pivot = a[high];
  int i = (low - 1);

  // Put the elements smaller than pivot on the left 
  // and greater than pivot on the right of pivot
  for (int j = low; j < high; j++) {
    if (a[j] <= pivot) {
      i++;
      swap(&a[i], &a[j]);
    }
  }
  swap(&a[i + 1], &a[high]);
  return (i + 1);
}

void quicksort(int a[], int low, int high) {
  if (low < high) {
    // Select pivot position and put all the elements smaller 
    // than pivot on left and greater than pivot on right
    int pi = partition(a, low, high);

    // Sort the elements on the left of pivot
    quicksort(a, low, pi - 1);

    // Sort the elements on the right of pivot
    quicksort(a, pi + 1, high);
  }
}


int main() {
  int a[] = {8, 7, 6, 1, 0, 9, 2};
  int n = sizeof(a) / sizeof(a[0]);
  
  quicksort(a, 0, n - 1);
  
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
 
  return 0;
}