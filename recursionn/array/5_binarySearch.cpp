#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int key) {
    int mid = s+ (e-s)/2;
    // 1. Base cases
    if (s > e) 
    {
        return false; 
    }
    
    // 2. Normal cases
    if (arr[mid] == key)
    {
        return true;
    }
    else if (arr[mid] > key)
    {
        //Move to left part
        return binarySearch(arr, s, mid-1, key);
    }
    else
    {
        // Move to right part
        return binarySearch(arr, mid+1, e, key);
    }
    
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int key = 9;
    bool ans = binarySearch(arr, 0, 4, key);
    cout << ans << endl;
    if (ans)
    {
        cout << "Present" <<endl;
    }
    else
    {
        cout << "Not Present" <<endl;
    }
    return 0;
}