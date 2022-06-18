#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back
#define rep(i, q, w) for (int i = q; i < w; i++)

string solve(int n)
{
    if (n == 1)   
    {
        return "1";
    }

    if (n == 2)
    {
        return "11";
    }

    string ans = "11";
    for (int i = 3; i <= n; i++)
    {
        string temp = "";
        ans += '@';
        int count = 1;
        for (int j = 1; j < ans.length(); j++)
        {
            if (ans[j] != ans[j - 1])
            {
                temp += to_string(count);
                temp += ans[j - 1];
                count = 1;
            }
            else
            {
                count++;
            }
        }
        ans = temp;
    }
    return ans;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string ans1=solve(n);
        cout<<ans1;
    }
    return 0;
}