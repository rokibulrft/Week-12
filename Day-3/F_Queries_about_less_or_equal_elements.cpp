#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    int n, m;
    cin >> n >> m;
    pbds<int> p;
    while (n--)
    {
        int x;
        cin >> x;
        p.insert(x);
    }
    while (m--)
    {
        int x;
        cin >> x;
        cout << p.order_of_key(x + 1) << " ";
    }
}