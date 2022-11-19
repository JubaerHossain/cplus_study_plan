#include<iostream>

using namespace std;

int search(int arr[], int n,int f) {

    int low = 0, high = n;

    while (low <= high) // continue the loop till the end of array
    {
        cout << " low = " << low << " high = " << high << endl;
        cout << endl;
        int mid = low + (high - low) / 2;  // find the mid of the array
        cout << " mid = " << mid << endl;
        cout << endl;
        cout << " arr[mid] = " << arr[mid] << endl;


        if(arr[mid] == f) return mid; // if match the element return the index


        if(arr[low] <= arr[mid]){
            if( arr[low] <= f && f <= arr[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }else{
            if(arr[mid] <= f && f <= arr[high]){
                low = mid + 1;
            }else{
                high = mid - 1;
            }

        }
    }

    


  return -1;
}

int main() {

  int arr[] = { 1, 3, 20, 4, 1, 0 };
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "position is  " << search(arr, n, 4);

  return 0;
}