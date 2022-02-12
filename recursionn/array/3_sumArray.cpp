#include<iostream>
using namespace std;

int sumArray(int *arr,int sum, int size) { //Size is counter & sum is accumulator
    // 1. Base cases
    if(size <= 1) return sum + arr[0];
    
    // 2. Normal cases
    sum += arr[0]; //Small problem solved..
    return sumArray(arr + 1, sum, size - 1);
}

int main()
{
    int arr[3] = {1, 2, 3};
    cout << sumArray(arr, 0, 3);
    return 0;
}