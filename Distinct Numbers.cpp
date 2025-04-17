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
   int n;cin>>n;
   set<int>s;
   for(int i = 0 ;i<n ; i++)
   {
    int x;cin>>x;
    s.insert(x);
   }
   cout<<s.size();
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifndef ONLINE_JUDGE
    files();
    #endif
    solve();
    return 0;
}
