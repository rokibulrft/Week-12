#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            if (s[i] == 'a' && i != 0)
                count++;
            else if (s[i] == 'b' && i != 1)
                count++;
            else if (s[i] == 'c' && i != 2)
                count++;
        }
        if (count <= 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}