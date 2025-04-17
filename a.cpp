#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int sum = 0, rem = 0;
    cin >> n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    cout << sum << endl;
}