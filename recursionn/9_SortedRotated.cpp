#include<iostream>
using namespace std;

/*
Algo: 1. First find the pivot element
2. Apply binary search on both the sorted parts 
*/

int findPivot(int arr[], int s, int e) {
    // 1.Base cases
    if(s > e) return -1;


    // 2. Normal cases
    int mid = s+(e-s)/2;

    if (arr[mid-1] > arr[mid]) return mid;

    else if (arr[mid-1] < arr[mid]) return findPivot(arr, mid+1, e);

    else return findPivot(arr, s, mid-1);
}

int binarySearch(int *arr, int s, int e, int key) {
    int mid = s+(e-s)/2;

    // Base cases
    if (s > e) return -1;
    
    // Normal cases
    if(arr[mid] == key) return mid;

    else if(arr[mid] > key) {
        //Left Move
        binarySearch(arr, s, mid-1, key);
    }

    else {
        //Right Move
        binarySearch(arr, mid+1, e, key);
    }
}

int main()
{
    int arr[8] ={4,5,6,7,8,1,2,3};
    int pivot = findPivot(arr, 0, 7);
    int key = 7;
    cout << pivot << endl;
    cout << binarySearch(arr,0, pivot-1, key) <<endl;
    cout << binarySearch(arr,pivot, 7, key) <<endl;
    return 0;
}