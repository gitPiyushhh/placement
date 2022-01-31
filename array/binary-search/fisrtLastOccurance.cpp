//Eg. [1, 2, 2, 3 ] o/p: Fisrt: 1,Last: 2


#include<iostream>
using namespace std;

// Brute force 

// void firstLastIndex(int arr[], int size, int key) {

//     int start = 0;
//     int end = start-1;
//     int first = -1, last = -1;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             first = i;
//             break;
//         }
        
//     }
    
//     for (int j = size; j >= 0; j--)
//     {
//         if (arr[j] == key)
//         {
//             last = j;
//             break;
//         }
//     }
//     cout << "Start Index: " << first << endl;
//     cout << "End Index: " << last << endl;
// }

// Optimised 
int firstOccurance(int arr[], int n, int key) {
    int s = 0, e = n-1;
    int mid = s + (e-s) / 2;

    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1; //Left me move kar jaao ho sakta h aur bhi 'key' ho😕
        }
        
        else if (arr[mid] > key)
        {
            /* Left side move */
            e = mid - 1;
        }
        
        else
        {
            /* Right side move */
            s = mid + 1;
        }
        mid = s + (e-s) / 2;
    }
    return ans;
}

int lastOccurance(int arr[], int n, int key) {
    int s = 0, e = n-1;
    int mid = s + (e-s) / 2;

    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1; //Right me move kar jaao ho sakta h aur bhi 'key' ho😕
        }
        
        else if (arr[mid] > key)
        {
            /* Left side move */
            e = mid - 1;
        }
        
        else
        {
            /* Right side move */
            s = mid + 1;
        }
        mid = s + (e-s) / 2;
    }
    return ans;
}

int main()
{
    int arr[7] = {1, 2, 2, 2, 3};
    cout << firstOccurance(arr, 7, 2)<< endl;
    cout << lastOccurance(arr, 7, 2)<< endl;
    return 0;
}

