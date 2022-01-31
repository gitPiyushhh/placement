#include<iostream>
using namespace std;

int findMax(int arr[], int size) {
    int maxIndex = 0;
    for (int i = 0; i < size; i++)
    {
        /* code */
        if(arr[i] >= arr[maxIndex]) maxIndex = i;
    }
    return maxIndex;
}

int findMin(int arr[], int size) {
    int minIndex = 0;
    for (int i = 0; i < size; i++)
    {
        /* code */
        if(arr[i] <= arr[minIndex]) minIndex = i;
    }
    return minIndex;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    cout << findMax(arr, size) << endl;
    cout << findMin(arr, size) << endl;
    return 0;
}