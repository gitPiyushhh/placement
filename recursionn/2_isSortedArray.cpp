#include <iostream>
using namespace std;

bool isSorted(int *arr, int size)
{
    // 1. Base cases
    if (size == 1 || size == 0)
        return true;

    // 2. Base cases
    if (arr[0] > arr[1]) 
        return false; // Small problem solved
    else 
        return isSorted(arr+1, size-1); //2. Rest problem solved by recursion
}

int main()
{
    int arr[3] = {0, 1, 2};
    int arr2[5] = {2, 3 , 9 , 5, 1};
    // bool ans = isSorted(arr, 3);
    bool ans = isSorted(arr2, 5);

    if (ans)
    {
        cout << "Array Sorted" << endl;
    }
    else
    {
        cout << "Array not Sorted" << endl;
    }

    return 0;
}