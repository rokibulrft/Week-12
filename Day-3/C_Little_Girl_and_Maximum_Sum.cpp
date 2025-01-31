#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<long long int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long int> dif(n + 1);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        dif[l]++;
        dif[r]--;
    }
    for (int i = 1; i <= n; i++)
    {
        dif[i] = dif[i - 1] + dif[i];
    }
    sort(a.rbegin(), a.rend());
    sort(dif.rbegin(), dif.rend());
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += a[i] * dif[i];
    }
    cout << ans;
}