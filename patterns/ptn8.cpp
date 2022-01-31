/*
    A A A
    B B B
    C C C
*/

#include<iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++) {
        int count = 'A' + n - i;
        for (int j = 1; j <= i; j++) {
            char c = count;
            count += 1;
            cout << c;
        }
        cout << endl;
    }
    
    return 0;
}