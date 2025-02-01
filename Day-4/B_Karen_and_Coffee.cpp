#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
int v[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, q;
    cin >> n >> k >> q;

    while (n--)
    {
        int l, r;
        cin >> l >> r;
        v[l]++, v[r + 1]--;
    }

    for (int i = 1; i <= N; i++)
        v[i] += v[i - 1];

    for (int i = 1; i <= N; i++)
        v[i] = (v[i] >= k ? 1 : 0);

    for (int i = 1; i <= N; i++)
        v[i] += v[i - 1];

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << v[b] - v[a - 1] << '\n';
    }
}
