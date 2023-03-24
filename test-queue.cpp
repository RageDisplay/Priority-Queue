#include "priority-queue.h"

int main() 
{
  vector<int> Tree;
  add(Tree, 9); //добавляем элементы
  add(Tree, 7);
  add(Tree, 5);
  add(Tree, 6);
  add(Tree, 3);
  add(Tree, 8);
  add(Tree, 0);
  add(Tree, 3);
  add(Tree, 1);
  add(Tree, 14);
  cout << "Array: ";
  printArray(Tree);
  deleteElement(Tree, 5);
  cout << "After delete: ";
  printArray(Tree);
  showsize(Tree);
  highest(Tree);
  check(Tree);
}
