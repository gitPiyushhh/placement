#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int> v1, vector<int> v2, vector<int> v3) {
    int i = 0, j = 0;
    
    while(i < v1.size() && j < v2.size()) {
        if(v1[i] < v2[j]) {
            v3.push_back(v1[i]);
            i++;
        }
        else {
            v3.push_back(v2[j]);
            j++;
        }
    }

    
    // v1 exhausted

    while(j < v2.size()) {
        v3.push_back(v2[j]);
        j++;
    }

    // v2 exhausted
    while(i < v1.size()) {
        v3.push_back(v1[i]);
        i++;
    }

    return v3;
}

void print(vector<int> v) {
    for(int i:v) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v1 = {1, 2, 5};
    vector<int> v2 = {3, 4};
    vector<int> v3;

    print(merge(v1, v2, v3));

    return 0;
}