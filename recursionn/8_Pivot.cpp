#include<iostream>
using namespace std;

int findPivot(int arr[], int s, int e) {
    // 1.Base cases
    if(s > e) return -1;


    // 2. Normal cases
    int mid = s+(e-s)/2;
    // Pivot element is where {arr[mid-1] > arr[mid]}
    if (arr[mid-1] > arr[mid]) return mid;

    //a. On the left part
    else if (arr[mid-1] < arr[mid]) return findPivot(arr, mid+1, e);

    //b. On the right part
    else return findPivot(arr, s, mid-1);
}

int main()
{
    int arr[8] = {4,5,6,7,8,1,2,3};
    cout << findPivot(arr, 0, 7)  << endl;
    return 0;
}