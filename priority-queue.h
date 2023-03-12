#include <iostream>
#include <vector>
using namespace std;

void position(int *a, int *b)  //замена мест элементов
{
  int tmp = *b;
  *b = *a;
  *a = tmp;
}

void sort(vector<int> &arr, int i) //сортировка
{
  int size = arr.size();
  int highest = i;          //наибольшие значения со всех сторон
  int left = 2 * i + 1;
  int right = 2 * i + 2;
  if (left < size && arr[left] > arr[highest])
  {
    highest = left;
  }

  if (right < size && arr[right] > arr[highest])
  {
    highest = right;
  }

  if (highest != i) 
  {
    position(&arr[i], &arr[highest]);
    sort(arr, highest);
  }
}

void add(vector<int> &arr, int newNum) 
{
  int size = arr.size();
  if (size == 0) 
  {
    arr.push_back(newNum);
  } 
  else 
  {
    arr.push_back(newNum);
    for (int i = size / 2 - 1; i >= 0; i--) 
    {
      sort(arr, i);
    }
  }
}

void deleteElement(vector<int> &arr, int num) 
{
  int size = arr.size();
  int i;
  for (i = 0; i < size; i++) 
  {
    if (num == arr[i])
    {
      break;
    }
  }
  position(&arr[i], &arr[size - 1]);
  arr.pop_back();
  for (int i = size / 2 - 1; i >= 0; i--) 
  {
    sort(arr, i);
  }
}

void showsize(vector<int> &arr)
{
  int s = arr.size();
  cout<<"The size of the array is "<<s<<endl;
}

void highest(vector<int> &arr)
{
  cout<<"The biggest element is "<<arr[0]<<endl;
}

void check(vector<int> &arr)
{
  int checking = arr.size();
  if (checking > 0)
  {
    cout<<"Array is not empty, there are "<<checking<<" elements"<<endl;
  }

  else
  {
    cout<<"The array is empty"<<endl;
  }
}

void printArray(vector<int> &arr) 
{
  for (int i = 0; i < arr.size(); ++i)
    {
      cout << arr[i] << " ";
    }
  cout << "\n";
}