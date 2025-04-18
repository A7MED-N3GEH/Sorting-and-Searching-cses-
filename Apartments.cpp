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
    int n,m,k ; cin>>n>>m>>k;

    vector<int>a(n);
    vector<int>b(m);
    for(auto &i:a)cin>>i;
    for(auto &i:b)cin>>i;

    sort(a.begin() , a.end());
    sort(b.begin() , b.end());
    int i = 0 , j = 0 , ans =0;
    while (i<n and j < m )
    {
        if(a[i] + k >= b[j] and a[i] - k <= b[j])
        {
            ans++;
            j++;
            i++;
        }else if(a[i] - k > b[j])
        {
            j++;
        }else{
            i++;
        }
    }cout<<ans;
    

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
