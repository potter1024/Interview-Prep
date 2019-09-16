#include <bits/stdc++.h>
using namespace std;
#define sz(a) int((a).size())
#define ll long long
#define pb push_back
#define ld long double
#define mp make_pair
#define vi vector<ll>
#define endl "\n"
#define all(c) (c).begin(),(c).end()
#define allr(c) (c).rbegin(),(c).rend()
#define rep(i,n) for(ll i=0;i<n;i++)
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define input(a,n) for(long long i=0;i<n;i++)cin>>a[i]
#define output(a,n) for(long long i=0;i<n;i++)cout<<a[i]<<" "
#define     she_taught_me_to_code cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ep 1e-10
#define pi pair<ll,ll>
#define inf 10e9
#define N 1000000
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
ll gcd(ll a,ll b)
{
    if (!b)
        return a;
    return gcd(b, a % b);
}
ll lcm1(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}
ll min(ll a,ll b)
{
    if(a<b)
        return a;
    return b;
}
ll max(ll a,ll b)
{
    if(a>b)
        return a;
    return b;
}
int main()
{
    she_taught_me_to_code

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    stack<ll> s;
    ll n;
    cin>>n;
    vi v(n);
    input(v,n);
    ll root=INT_MIN;
    for(ll i=0;i<n;i++)
    {
        if(v[i]<root)
            return 0;
        while(!s.empty() && s.top()<v[i])
        {
            root=s.top();
            s.pop();
        }
        s.push(v[i]);
    }
}
