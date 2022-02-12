#include <iostream>
using namespace std;

void reverse(string &s, int i)
{
    if (i > s.length()/2)
        return;
    swap(s[i], s[s.length() - i-1]); //Inplace of n-i-1 we can use double pointer also..
    i++;
    reverse(s, i);
}

int main()
{
    string s = "Piyush";
    reverse(s, 0);
    cout << s;
    return 0;
}