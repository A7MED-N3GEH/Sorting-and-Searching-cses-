#include <bits/stdc++.h>
using namespace std;
#define int long long
void files()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void solve()
{
    int n,x;cin>>n>>x;
    vector<int>v(n);
    for(auto &i:v)cin>>i;
    sort(v.begin() , v.end());
    int i = 0  , j = n-1 , ans = 0;

    while (i<=j)
    {
        if(v[i] + v[j] <= x)
        {
            i++;
            j--;
            ans++;
        }else{
            j--;
            ans++;
        }
    }
    cout<<ans;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // ( إِنَّ اللَّهَ وَمَلَائِكَتَهُ يُصَلُّونَ عَلَى النَّبِيِّ ۚ يَا أَيُّهَا الَّذِينَ آمَنُوا صَلُّوا عَلَيْهِ وَسَلِّمُوا تَسْلِيمًا )
    #ifndef ONLINE_JUDGE
    files();
    #endif
    solve();
    return 0;
}
