/******************
  Rana's code
******************/
#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define all(a) a.begin(),a.end()

using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
const int MOD = 1e9+7;

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  /*  #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif */
    ll test,n,k;
    cin>>test;
    while(test--)
    { 
        cin>>n>>k;
        ll arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
       
            while(k>0 && i<n)
            {
                if(arr[i]==0)
                {
                    arr[i]=1;k--;
                    i++;
                }
            }

             }

}