#include <iostream>
using namespace std;

void swap(int *p1, int *p2) {
  int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
  int a, b;
    cout << "Enter two values: ";
    cin >> a >> b;

  // Display numbers before swapping
    cout << "\n Before swapping: a = " << a << ", b = " << b;
  
  // Swapping function call
    swap(&a, &b);
  
  // Display numbers after swapping
    cout << "\n After swapping: a = " << a << ", b = " << b;
}