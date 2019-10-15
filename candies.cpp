#include <bits/stdc++.h>
using namespace std;
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
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a+b==c+d){
    	cout<<"Yes";return 0;}
    	 else if(a+c==b+d){
    	cout<<"Yes";return 0;}
    	else if(a+d==c+b){
    	cout<<"Yes";return 0;}
    	else if(a==b+c+d){
    	cout<<"Yes";return 0;}
    	else if(b==a+c+d){
    	cout<<"Yes";return 0;}
    	else if(c==a+b+d){
    	cout<<"Yes";return 0;}
    	else if(d==a+b+c){
    	cout<<"Yes";return 0;}
    	else if(a+c==b+d){
    	cout<<"Yes";return 0;}
    	else{
    	cout<<"No";return 0;}
    
    }