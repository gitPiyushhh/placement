#include<iostream>
using namespace std;

int partition(int* arr, int s, int e) {
    int pivot = arr[s];
    int count = 0;

    // 1. Count the elements less than pivot
    for (int i = s+1; i <= e; i++) 
    {
        if(arr[i] < pivot) 
            count++;
    }
    
    // 2. Place the pivot element at the correct position
    int correctPos = s + count;
    swap(arr[correctPos], arr[s]);

    // 3. All left < pivot < Right {Double pointer approach}
    int i = s, j = e;
    
    while (i < correctPos && j > correctPos)
    {
        // Swap if the elements not in correct position
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < correctPos && j > correctPos)
        {
            swap(arr[i++], arr[j--]);
        }
        
    }

    return correctPos;
}

void quickSort(int* arr, int s, int e) {
    if(s >= e) 
        return; 

    // 1. Take pivot to the right place
    int p = partition(arr, s, e);

    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);

}

int main()
{
    int n = 5;
    int arr[n] = {3,1,4,5,2};

    quickSort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}