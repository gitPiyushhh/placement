#include<iostream>
using namespace std;

int fib(int num) {
    //1. Base cases
    if (num==0) return 0; // Fibonacci no. at position 0 is '0'
    if (num==1) return 1; // Fibonacci no. at position 1 is '1'
    
    //2. Normal cases
    return fib(num-1)+fib(num-2);
}

int main()
{
    cout<<fib(3);
    return 0;
}