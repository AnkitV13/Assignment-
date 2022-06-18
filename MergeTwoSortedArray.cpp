#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back
#define rep(i, q, w) for (int i = q; i < w; i++)

void mergedArray(vector<int> &nums1, vector<int> &nums2)
{
    int n1 = nums1.size();
    int n2 = nums2.size();

    int p = n1 - 1;
    int q = n2 - 1;

    for (int i = 0; i < n2; i++)
    {
        nums1.push_back(0);
    }

    for (int i = n1 + n2 - 1; i >= 0; i--)
    {
        if (q < 0)
        {
            break;
        }

        if (p >= 0 && nums1[p] > nums2[q])
        {
            nums1[i] = nums1[p];
            p--;
        }
        else
        {
            nums1[i] = nums2[q];
            q--;
        }
    }
}

double solve(vector<int> &nums1, vector<int> &nums2)
{
    double sum = 0;

    mergedArray(nums1, nums2);
    int median = nums1.size() / 2;
    if ((nums1.size()) % 2 == 0)
    {
        sum = (double)(nums1[median - 1] + nums1[median]);
        sum /= 2;
    }
    else
        sum = (double)nums1[median];

    return sum;
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        vector<int> nums1;
        vector<int> nums2;
        int n1;
        cin>>n1;
        int n2;
        cin>>n2;
        rep(i,0,n1){
            int a;
            cin>>a;
            nums1.pb(a);
        }
        rep(i,0,n2){
            int b;
            cin>>b;
            nums2.pb(b);
        }
        double ans1 = solve(nums1, nums2);
        cout << ans1;
    }
    return 0;
}