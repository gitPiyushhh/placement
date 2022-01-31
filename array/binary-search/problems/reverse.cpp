#include<iostream>
#include<vector>
using namespace std;



vector <int> reverse(vector<int> v) {
    int s = 0, e = v.size()-1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++; e--;
    }
    return v;
}

void print(vector<int> v) {
    for(int i:v) {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector <int> v = {1,2,3,4,5};
    vector <int> r = reverse(v);

    print(v);
    print(r);
    return 0;
}