#include<iostream>
using namespace std;

int peakMountain(int *arr, int s, int e) {

    // Before peak < Peak > After peak

    int peak = 0;
    int mid = s+ (e-s)/2;

    //1. Base cases 
    if(s > e) return -1;

    //2. Normal cases
    if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid+1]) return mid;
    else if (arr[mid] < arr[mid+1]) {
        // Right move
        e = mid + 1;
    }
    else {
        //Left move
        s = mid - 1;
    }
}

int main()
{
    int arr[4] = {0,2,1,0};
    cout << peakMountain(arr, 0, 3);
    return 0;
}