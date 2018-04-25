/* Sorting an array using Bubble Sort (BubbleSort.cpp) */
#include <iostream>
using namespace std;
 
void bubbleSort(int a[], int size);
void print(const int a[], int size);
 
int main() {
   const int SIZE = 8;
   int a[] = {8, 4, 5, 3, 2, 9, 4, 1};
 
   print(a, SIZE);
   cout << endl;
   bubbleSort(a, SIZE);
   print(a, SIZE);
   cout << endl;
}
 
// Sort the given array of size
void bubbleSort(int a[], int size) {
   bool done = false; // terminate if no more swap thru a pass
   int pass = 0;      // pass number, for tracing
   int temp;          // use for swapping
 
   while (!done) {
      cout << "PASS " << ++pass << " ..." << endl;   // for tracing
      done = true;
      // Pass thru the list, compare adjacent items and swap
      // them if they are in wrong order
      for (int i = 0; i < size - 1; ++i) {
         if (a[i] > a[i+1]) {
            print(a, size); // for tracing
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
            done = false;   // swap detected, one more pass
            cout << "=> ";  // for tracing
            print(a, size);
            cout << endl;
         }
      }
   }
}
 
// Print the contents of the given array of size
void print(const int a[], int size) {
   cout << "{";
   for (int i = 0; i < size; ++i) {
      cout << a[i];
      if (i < size - 1) cout << ",";
   }
   cout << "} ";
}
