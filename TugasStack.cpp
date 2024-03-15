#include <iostream>

using std::cout;
using std::endl;

#include <list>
#include <stack>
#include <vector>

template <class T> void popElements(T &stackRef);

int main() {
  std::stack<int> intDequeStack;

  std::stack<int, std::vector<int>> intVectorStack;

  std::stack<int, std::list<int>> intListStack;

  for (int i = 0; i < 10; ++i) {
    intDequeStack.push(i);
    intVectorStack.push(i);
    intListStack.push(i);
  }

  cout << "Popping from intDequeStack: ";
  popElements(intDequeStack);
  cout << "Popping from intVectorStack: ";
  popElements(intVectorStack);
  cout << "Popping from intListStack: ";
  popElements(intListStack);

  cout << endl;

  return 0;
}

template <class T> void popElements(T &stackRef) {
  while (!stackRef.empty()) {
    cout << stackRef.top() << ' ';
    stackRef.pop();
  }
}
