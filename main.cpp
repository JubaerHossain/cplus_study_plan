#include<iostream>

using namespace std;

int peakEleBruteForce(int arr[], int n) {
    cout << arr[0] << " " << arr[1] << endl;
  if (arr[0] >= arr[1]){
    return arr[0];
  }

  for (int i = 1; i < n - 1; i++){
    if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
      return arr[i];
  }

  return arr[n - 1];
}

int main() {

  int arr[] = { 1, 3, 20, 4, 1, 0 };
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Peak Element is " << peakEleBruteForce(arr, n);

  return 0;
}