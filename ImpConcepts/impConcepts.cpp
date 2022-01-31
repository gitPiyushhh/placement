// IO files here 

#include<iostream>

// Macros here 
#define PI 3.14 // No ; here

using namespace std;

void update(int num) {
    num++;
}

void updateRef(int *num) {
    *num = *num + 1;
}

int getSum(int *arr,int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += arr[i];
    }
    return sum;
}

void ref(int &i) {
    i++;
    cout << "ref " << i << endl;
}

int main()
{
    /*

    int n = 5;
    int *ptr = &n;
    cout << "Before: " << n <<endl;
    update(n);
    cout << "After: " << n <<endl;

    cout << "Before: " << n <<endl;
    updateRef(ptr);
    cout << "After: " << n;
    

   //Dynamic memory allocation
    int n;
    cout << "Enter size.." <<endl;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << getSum(arr, n);

    
    

    // New 2D array 
    int n = 3;

    int ** arr = new int*[n]; //1. Create the column arr 
    for(int i = 0; i < n; i++) {
        arr[i] = new int[n]; //2. Every int* is a separate row array
    }

    // Taking input 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    
    // Printing output 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
    

    */

    int r = 5;
    cout << "Area is: " << PI*r*r << endl;

    

    ref(r);
    cout << "Oh no! I am changed from 5 to : " << r << endl;
    return 0;
}