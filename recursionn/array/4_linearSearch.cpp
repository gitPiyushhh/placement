#include<iostream>
using namespace std;

bool linearSearch(int *arr, int key, int size) {
    //1. Base cases
    if (size == 0)
    {
        return false;
    }
    
    //2. Normal cases
    if (arr[0] == key)
    {
        return true;
    }

    else
    {
        return linearSearch(arr+1, key, size-1);
    }
    
    
    
}

int main()
{
    int arr[5] = {1, 2, 3, 0, 4};
    cout << linearSearch(arr, 8, 5);
    return 0;
}