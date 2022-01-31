#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
    //While end > start
    while (end >= start)
    {
        // Swap arr[start] && arr[end]
        int temp; 
        temp = arr[start];
        arr[start] = arr[end];
        3
        arr[end] = temp;
        //start++, end--
        start++;
        end--;
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << arr[i] << endl;
    }
    
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr, 0, 4);
    return 0;
}