#include<iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int key) {
    int mid = s + (e-s)/2;

    while (s <= e) {
        if (arr[mid] == key) 
        {
            return mid;
        }
        else if (arr[mid] > key) {
            //Left side move 
            e = mid-1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int pivot(int arr[], int n) {
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            //Left side move
            s = mid + 1;
        }
        else {
            //Right side move
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main()
{
    int arr[5] = {7, 9, 1, 3, 5};
    int key = 9;
    int pivotVal = pivot(arr, 5);
    cout << pivotVal << endl;
    
    if (key > arr[pivotVal] && key < arr[5])   
    {
        // Right part
        cout << "I am searching between " << pivotVal << " & " << 5 <<endl;
        cout << binarySearch(arr, pivotVal, 5, key) << endl;
    }
    else
    {
        // Left part
        cout << "I am searching between " << 0 << " & " << pivotVal-1 <<endl;
        cout << binarySearch(arr, 0, pivotVal-1, key) << endl;
    }
    return 0;
}