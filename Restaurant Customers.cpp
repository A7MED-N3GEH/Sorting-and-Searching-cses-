#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    
    int n;cin>>n;
    vector<pair<int,int>>v;
    for(int i = 0 ; i<n ; i++)
    {
        int x,y;cin>>x>>y;
        v.push_back({x , 1});
        v.push_back({y , -1});
    }
    sort(v.begin() , v.end());
    int ans = 0;
    int sm = 0;
    for(auto [x,y] : v)
    {
        sm += y;
        ans = max(ans , sm);
    }
    cout<<ans<<'\n';
    
}
signed main()
{

    solve();
    return 0;
}
