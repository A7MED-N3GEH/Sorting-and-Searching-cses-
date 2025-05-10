#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,q;cin>>n>>q;
    vector<int>v(n);
    multiset<int>ms;
    for(auto &i:v)cin>>i,ms.insert(i);
    while (q--)
    {
        int x;cin>>x;
        auto it = ms.upper_bound(x);
        if(it == ms.begin())
        {
            cout<<-1<<'\n';
        }else{
            it--;
            cout<<*it<<'\n';
            ms.erase(it);
        }
    }
}
signed main()
{

    solve();
    return 0;
}
