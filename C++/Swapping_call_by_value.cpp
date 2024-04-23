#include <iostream>
using namespace std;

int main() {
  int num1, num2;
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;

  // Display numbers before swapping
    cout << "\nBefore swapping: First Number = " << num1 << ", Second Number = " << num2;

  // Swapping function call
    swap(num1, num2);

  // Display numbers after swapping
    cout << "\nAfter Swapping: First Number = " << num1 << ", Second Number = " << num2;
  return 0;
}

void swap(int num1, int num2) {
  int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}