// i/p: [1,3,7,6,5,6] o/p: 3 Because left index is equal to rght index
#include<iostream>
using namespace std;

int findPivot(int arr[], int n) {
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;

    while(s < e) {
        if (arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main()
{
    int arr[6] = {7, 9 , 1, 2, 3, 4};
    cout << findPivot(arr, 6)  << endl;
    return 0;
}