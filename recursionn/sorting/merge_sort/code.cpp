#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{

    int mid = s + (e - s) / 2;

    // 1. Length calc for sub arrays
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // 2. New sub array creation
    int *first = new int[len1];
    int *second = new int[len2];

    // 3. Copy values
    int mainIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIndex++];
    }

    mainIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIndex++];
    }

    // 4. Merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainIndex = s;

    // For both arrays not exhausted
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainIndex++] = first[index1++];
        }
        else
        {
            arr[mainIndex++] = second[index2++];
        }
    }

    // For 1 array exhausted
    while (index1 < len1)
    {
        arr[mainIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    // 1. Partition array
    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid);     // Left part
    mergeSort(arr, mid + 1, e); // Right part

    // 2. Merge array
    merge(arr, s, e);
}

int main()
{
    int arr[5] = {3, 2, 6, 1, 5};
    int n = 5; 

    mergeSort(arr, 0, n-1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}