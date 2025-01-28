#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long int ans = 0, product = 1;
        for (int i = 0; i < n; i++)
        {
            int a = v[i] + 1;
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    product = product * a;
                }
                else
                {
                    product = product * v[j];
                }
            }
            ans = max(ans, product);
            product = 1;
        }
        cout << ans << '\n';
    }
}