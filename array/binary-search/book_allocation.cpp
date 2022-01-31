#include<iostream>
using namespace std;

bool isPossible (int arr[], int n, int m, int mid) {
    int pageSum = 0; int studentCount = 1; // Atleast 1 student
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            // Solution is possible
            pageSum += arr[i];
        }
        else
        {
            //1. Increase student count 
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int find(int arr[], int n, int m) {
    int sum = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int s = 0, e = sum;
    int mid = s+(e-s)/2;

    while (s < e) {
        if (isPossible(arr, n , m , mid))
        {
            // Answer is posiible
            ans = mid;
            e = mid - 1;
        }
        else
        {
            // Answer is not posiible
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[4] = {10, 20, 30, 40};
    int m = 2; //Students
    cout << find(arr, 4, 2) << endl;
    return 0;
}