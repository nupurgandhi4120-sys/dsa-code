#include <iostream>
using namespace std;
int search(int arr[], int n, int find) {
  for (int i = 0; i < n; i++)
    if (arr[i] == find)
      return i;
}
int main() {
  int arr[5] = {2, 4, 0, 1, 9};
  int find = 9;
  int n = sizeof(arr);
  int result = search(arr, n, find);

  cout << " found at index: " << result;
}
