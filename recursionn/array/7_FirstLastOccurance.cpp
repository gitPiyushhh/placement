#include<iostream>
using namespace std;

int ans = -1;
int firstOccurance(int *arr, int s, int e, int key) {
    //1.Base cases 
    if (s > e)
    {
        return ans;
    }
    
    //2.Normal cases
    int mid = s + (e-s)/2;
    if (arr[mid] == key)
    {
        ans = mid;
        firstOccurance(arr, s, mid-1, key); // Any other element on the right will certainly not be the first occurance😌
    }
    else if (arr[mid] > key) {
        // Left move
        firstOccurance(arr, s, mid-1, key);
    }
    else {
        //Right move
        firstOccurance(arr, mid+1, e, key);
    }
    return ans;
}



int lastOccurance(int *arr, int s, int e, int key) {
    //1.Base cases 
    if (s > e)
    {
        return ans;
    }
    
    //2.Normal cases
    int mid = s + (e-s)/2;
    if (arr[mid] == key)
    {
        ans = mid;
        lastOccurance(arr, mid+1, e, key); // Any other element on the right will certainly not be the first occurance😌
    }
    else if (arr[mid] > key) {
        // Left move
        lastOccurance(arr, s, mid-1, key);
    }
    else {
        //Right move
        lastOccurance(arr, mid+1, e, key);
    }
    return ans;
}

int main()
{
    int arr[6] = {1, 3, 3, 3, 5, 7};
    int key = 3;
    cout << firstOccurance(arr, 0, 5, key) << " " << lastOccurance(arr, 0, 5, key) << endl;
    return 0;
}