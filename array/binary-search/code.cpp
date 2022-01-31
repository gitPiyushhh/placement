#include<iostream>
using namespace std;

int search(int arr[], int size ,int key) {
    int start = 0;
    int end = size-1;
    int mid = start + (end-start) / 2;

    while (start <= mid) 
    {
        /* code */
        if (arr[mid] == key)
    {
        /* Return index */
        return mid;
    }

    else if (arr[mid] > key) {
        //Left side move
        end = mid - 1;

    }
    
    else {
        //Right side move
        start = mid + 1;
    }
    mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {2,4,6,8,10,12};
    int odd[5] = {1,3,5,7,9};
    int index = search(even, 6 , 8);
    
    cout << index << endl;
    return 0;
}