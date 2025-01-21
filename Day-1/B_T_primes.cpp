#include <bits/stdc++.h>
using namespace std;

bool is_prime(long long n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        long long a;
        cin >> a;
        long long b = sqrt(a);
        if (b * b == a && is_prime(sqrt(a)))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}