#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#include <vector>

template <class T> void printVector(const std::vector<T> &integers2);

int main() {
  const int SIZE = 6;
  int array[SIZE] = {1, 2, 3, 4, 5, 6};

  std::vector<int> integers;

  cout << "The initial size of integers is: " << integers.size()
       << "\nThe initial capacity of integers is: " << integers.capacity();

  integers.push_back(2);
  integers.push_back(3);
  integers.push_back(4);

  cout << "\nThe size of integers is: " << integers.size()
       << "\nThe capacity of integers is: " << integers.capacity();

  cout << "\n\nOutput vector using pointer notation: ";

  for (int *ptr = array; ptr != array + SIZE; ++ptr) {
    cout << *ptr << ' ';
  }

  cout << "\nOutput vector using iterator notation: ";
  printVector(integers);

  cout << "\nReversed contents of vector integers: ";

  std::vector<int>::reverse_iterator reverseIterator;

  for (reverseIterator = integers.rbegin(); reverseIterator != integers.rend();
       ++reverseIterator) {
    cout << *reverseIterator << ' ';
  }

  cout << endl;

  return 0;
} // end main

template <class T> void printVector(const std::vector<T> &integers2) {
  typename std::vector<T>::const_iterator constIterator;

  for (constIterator = integers2.begin(); constIterator != integers2.end();
       constIterator++) {
    cout << *constIterator << ' ';
  }
} // end function printVector
