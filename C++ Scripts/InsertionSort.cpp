/* Sorting an array using Insertion Sort (InsertionSort.cpp) */
#include <iostream>
using namespace std;
 
void insertionSort(int a[], int size);
void print(const int a[], int iMin, int iMax);
 
int main() {
   const int SIZE = 8;
   int a[SIZE] = {8, 4, 5, 3, 2, 9, 4, 1};
 
   print(a, 0, SIZE - 1);
   cout << endl;
   insertionSort(a, SIZE);
   print(a, 0, SIZE - 1);
   cout << endl;
}
 
// Sort the given array of size using insertion sort
void insertionSort(int a[], int size) {
   int temp;   // for shifting elements
   for (int i = 1; i < size; ++i) {
      // for tracing
      print(a, 0, i - 1);    // already sorted
      print(a, i, size - 1); // to be sorted
      cout << endl;
 
      // For element at i, insert into proper position in [0, i-1]
      //  which is already sorted.
      // Shift down the other elements
      for (int prev = 0; prev < i; ++prev) {
         if (a[i] < a[prev]) {
            // insert a[i] at prev, shift the elements down
            temp = a[i];
            for (int shift = i; shift > prev; --shift) {
               a[shift] = a[shift-1];
            }
            a[prev] = temp;
            break;
         }
      }
   }
}
 
// Print the contents of the array in [iMin, iMax]
void print(const int a[], int iMin, int iMax) {
   cout << "{";
   for (int i = iMin; i <= iMax; ++i) {
      cout << a[i];
      if (i < iMax) cout << ",";
   }
   cout << "} ";
}
