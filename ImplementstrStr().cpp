#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back
#define rep(i, q, w) for (int i = q; i < w; i++)

int solve(string haystack, string needle)
{
    if (needle.length() == 0)
    {
        return 0;
    }
    int n = haystack.length() - needle.length();
    for (int i = 0; i <= n; i++)
    {
        if (haystack.substr(i, needle.length()) == needle)
            return i;
    }

    return -1;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        string str1;
        cin >> str1;
        string str2;
        cin >> str2;
        int ans1 = solve(str1, str2);
        cout << ans1;
    }
    return 0;
}