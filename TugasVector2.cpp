#include <iostream>

using std::cout;
using std::endl;

#include <algorithm>
#include <vector>

int main() {
  const int SIZE = 6;
  int array[SIZE] = {1, 2, 3, 4, 5, 6};

  std::vector<int> integers(array, array + SIZE);
  std::ostream_iterator<int> output(cout, " ");

  cout << "Vector integers contains: ";
  std::copy(integers.begin(), integers.end(), output);

  cout << "\nFirst element of integers: " << integers.front()
       << "\nLast element of integers: " << integers.back();

  integers[0] = 7;
  integers.at(2) = 10;

  integers.insert(integers.begin() + 1, 22);

  cout << "\n\nContents of vector integers after changes: ";
  std::copy(integers.begin(), integers.end(), output);

  try {
    integers.at(100) = 777;
  } catch (std::out_of_range outOfRange) {
    cout << "\n\nException: " << outOfRange.what();
  }

  integers.erase(integers.begin());

  cout << "\n\nVector integers after erasing first element: ";
  std::copy(integers.begin(), integers.end(), output);

  integers.erase(integers.begin(), integers.end());
  cout << "\nAfter erasing all elements, vector integers "
       << (integers.empty() ? "is" : "is not") << " empty";

  integers.insert(integers.begin(), array, array + SIZE);
  cout << "\n\nContents of vector integers before clear: ";
  std::copy(integers.begin(), integers.end(), output);

  integers.clear();
  cout << "\nAfter clear, vector integers "
       << (integers.empty() ? "is" : "is not") << " empty" << endl;

  cout << endl;
  return 0;
}
