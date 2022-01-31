/*
    1
    2 3
    3 4 5  
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int count = i;
        for (int j = 0; j < i; j++) {
            cout << count;
            count += 1;
            count -= 1; //For negative pattern
        }
        cout << endl;
    }
    
    return 0;
}