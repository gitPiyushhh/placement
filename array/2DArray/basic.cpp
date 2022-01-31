#include<iostream>
#include<vector>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col) {
    
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == target) return true;
        }
    }
    
    return false;
}

void sumRow(int arr[][4], int row, int col) {
    int max = 0, sum = 0, res = 0;
    
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        cout << sum  << endl;

        // Update the max
        if (sum > max) {
            max = sum;
            res = row + 1;
        }

        // Update the sum
        sum = 0;
    }
        cout << "Maximum sum row is: " << res << " ";
}


int main()
{
    int arr[3][4] = { {1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};

   /*
   
    Input --> row wise

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    // Input --> col wise

    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cin >> arr[col][row];
        }
    }
    */

    // Print --> row wise

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }



    int target;
    cout << "Enter the target Element: " << endl;
    cin >> target;
    cout << isPresent(arr, target, 3, 4) << endl;
    sumRow(arr, 3, 4);
    
    return 0;
}