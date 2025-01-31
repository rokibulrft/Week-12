#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    map<int, int> mp;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++, mp[r + 1]--;
    }
    long long sum = 0;
    bool ok = true;
    for (auto [key, value] : mp)
    {
        sum += value;
        if (sum > 2)
        {
            ok = false;
        }
    }
    if (ok)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}