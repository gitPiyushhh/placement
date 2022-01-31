/*
    A A A
    B B B
    C C C
*/

#include<iostream>
using namespace std;

int main()
{
    int count = 'A';
    int n = 3;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char c = count;
            cout << c;
        }
        count = count + 1;
        cout << endl;
    }
    
    return 0;
}