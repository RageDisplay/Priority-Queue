#include "priority-queue.h"

int main() 
{
  vector<int> Tree;
  add(Tree, 7); //добавляем элементы
  add(Tree, 9);
  add(Tree, 5);
  add(Tree, 6);
  add(Tree, 3);
  cout << "Array: ";
  printArray(Tree);
  deleteElement(Tree, 5);
  cout << "After delete: ";
  printArray(Tree);
  showsize(Tree);
  highest(Tree);
  check(Tree);
}