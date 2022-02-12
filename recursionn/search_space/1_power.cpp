#include <iostream>
using namespace std;

int ans = 1;

int calcPower(int n, int m)
{
    // Base case
    if (m == 0)
        return ans;

    // Normal cases

    // Logic is: 2^4 = 2^2 * 2^2 {Even}, 2^3 = 2^2 * 2
    if (m % 2)
    {
        // Here its odd, some output will come nah😮‍💨
        ans *= n * calcPower(n, m / 2);
    }
    else
    {
        // Its even
        ans *= calcPower(n, m / 2);
    }
    return ans;
}

int main()
{
    cout << calcPower(2, 10) << endl;
    return 0;
}