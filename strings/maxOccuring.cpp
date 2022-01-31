#include<iostream>
using namespace std;

char maxOccuring(string s) {
    int arr[26] = {0};
    int index = 0;

    // Mapping to the array

    for (int i = 0; i < s.length(); i++) 
    {
        index = s[i] - 'a';
        arr[index] += 1;
    }
    
    // Retrieve the max occuring 

    int max = 0, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > max) {
            max = arr[i];
            ans = 'a' + i;
        }
    }
    return ans;
}

int main()
{
    cout << maxOccuring("output") << endl;
    return 0;
}