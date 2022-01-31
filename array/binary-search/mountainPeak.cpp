// input: [0,10,5,2], o/p: 1


#include<iostream>
using namespace std;

int peak(int arr[], int n) {
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = 0;
    
    while (s < e)
    {
        if (arr[mid] < arr[mid+1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s; // we can also return 'e' (as both are overlapping)
}

int main()
{
    int arr[4] = {0, 10, 5, 2};
    cout<< peak(arr, 4);
    return 0;
}