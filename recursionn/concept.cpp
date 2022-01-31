#include<iostream>
#include<vector>
using namespace std;

/////////////////////////////////////////////////
/////// 1. Factorial

int factorial(int n) {

    // 1. Base case
    if (n == 0)
    {
        return 1; //Factorial of zero is one
    }
    
    // 2. Normal case
    int smallerProblem = factorial(n-1);
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}

/////////////////////////////////////////////////
/////// 2. Power

int power(int n,int kiPower) {
    
    //1. Base cases
    if (kiPower == 0)
    {
        return 1; // Most obvious value
    }

    //2. Normal cases
    int ans = n*power(n, kiPower-1);
    
    return ans;
}

/////////////////////////////////////////////////
/////// 3. Count print

void countPrint(int num) {

    //1. Base cases
    if(num == 0) return;

    //2. Normal cases
    cout << num << " ";
    
    return countPrint(num-1);
}


/////////////////////////////////////////////////
/////// 4. Check if array is sorted

bool isSorted(vector<int> arr, int index) {

    //1. Base cases --> When all indexes are seen 
    if (index == arr.size()-1) return true;

    //2. Normal cases
    bool faisla = arr[index] <= arr[index+1]; //😅
    // cout << faisla << endl;
    return faisla & isSorted(arr, index+1); 
}

/////////////////////////////////////////////////
/////// 5. Fibonacci

int fib(int n) {
        // 1. Base cases
        if(n==0) return 0;
        if(n==1) return 1;
        
        // 2. Normal cases

        int sum = 0;
        sum = fib(n-1) + fib(n-2);
        return fib(n-1) + fib(n-2);
    }



int main()
{
    // cout << factorial(5);
    // cout << power(2,3);
    // countPrint(2);
    // cout << isSorted({1,2,3,4,5}, 0);
    cout << fib(1);
    return 0;
}