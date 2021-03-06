#include <bits/stdc++.h>
using namespace std;
#define sz(a)               ll((a).size())
#define ll                  long long
#define pb                  push_back
#define ld                  long double
#define mp                  make_pair
#define vi                  vector<ll>
#define vii                  vector<pi>
#define endl                "\n"
#define ff                  first
#define ss                  second
#define all(c)              (c).begin(),(c).end()
#define allr(c)             (c).rbegin(),(c).rend()
#define rep(i,n)            for(ll i=0;i<n;i++)
#define cpresent(c,x)       (find(all(c),x) != (c).end())
#define input(a,n)          for(long long i=0;i<n;i++)cin>>a[i]
#define output(a)           for(long long i=0;i<a.size();i++)cout<<a[i]<<" "
#define reset(a,n)          memset(a,n,sizeof(a))   // n can only be 0 or -1
#define ep                  1e-10
#define seed                13331
#define pi                  pair<ll,ll>
#define inf                 10e9
#define N                   1000000
#define minp                vector<ll>, greater<ll>
#define M                   1000000007
#define pie                 3.1415926535897932384626433832795
#define eu                  2.718281828459045
#define                     she_taught_me_to_code cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);cin.tie(NULL);    clock_t startTime=clock(); cout<<fixed<<setprecision(12);
#define time     cout<<(double(clock()-startTime )/(double)CLOCKS_PER_SEC)*1000<<" ms"<<endl;
#define debug(k) cout<<"\t-> "<<#k<<" = "<<k<<endl;

/************************************Debugging Tips****************************************/

// If aplying ceil, floor, pow, etc convert it llo lleger
// Whenever using stacks,queues,etc always check that their top / front / back elements are not accessed when they are empty, thus causing runtime error
// Think twice before using greedy
// Remember losing 1 or 2 minutes is better than a penalty of 10 minutes
// Use log2 instead of log()/log(2) to avoid shitty errors
// If declaring a large array, define it globally
// Always initialise anything while declaring, which will not be taken as input
// In case of a problem having decimal calculations, try declaring everything in double rather than typecasting in each step
// Always declare the array with n+5 elements to avoid unexpected errors
// Every problem cannot be solved by DFS easily, think of BFS too
// Never use accumulate
// Use __builtin_popcountll(mask) for counting number of set bits in mask to avoid TLE
// In some problems it has some constant solution for large n and a polynomial solution for small n so that it can be easily solved, keep that in mind
// Use upper_bound(all(v),x,greater<ll>()) for reverse of upper_bound, i.e finding greatest element less than x, v should be reverse sorted

bool sortbysec(const pair<ll,pair<ll,ll> > &a,const pair<ll,pair<ll,ll> > &b){
    return (a.ss.ff < b.ss.ff);
}
bool sortbyth(const pair<ll,pair<ll,ll> > &a,const pair<ll,pair<ll,ll> > &b){
    return (a.ss.ss < b.ss.ss);
}
ll gcd(ll a,ll b){
    return b?gcd(b, a % b):a;
}
ll lcm(ll a,ll b){
    return (a*b)/gcd(a,b);
}
ll min(ll a,ll b){
    return a<b?a:b;
}
ll max(ll a,ll b){
    return a>b?a:b;
}
ll max3(ll a,ll b,ll c){
    return max(max(a,b),c);
}
ll max4(ll a,ll b,ll c,ll d){
    return max(max(a,b),max(c,d));
}
ll min3(ll a,ll b,ll c){
    return min(min(a,b),c);
}
ll min4(ll a,ll b,ll c,ll d){
    return min(min(a,b),min(c,d));
}
ll po(ll x,ll n,ll mod=M){
    if(n==0){
        return 1;
    }
    ll m=po(x,n/2,mod);
    m*=m;
    m%=mod;
    if(n%2){
        m*=x;
        m%=mod;
    }
    return m;
}
ll n;
vi v(100000);
void up_heapify(ll index){
    if(index==1){
        return;
    }
    if(v[index/2]<v[index]){
        swap(v[index/2],v[index]);
        up_heapify(index/2);
    }
}
void down_heapify(ll index,ll size){
    ll ind=index;
    if(index*2<=size && v[index*2]>v[index]){
        ind=index*2;
    }
    if(index*2+1<=size && v[index*2+1]>v[ind]){
        ind=index*2+1;
    }
    if(ind==index*2){
        swap(v[ind],v[index]);
        down_heapify(ind,size);
    }
    else if(ind==index*2+1){
        swap(v[ind],v[index]);
        down_heapify(ind,size);
    }
}
int main(){

    she_taught_me_to_code

    // freopen("input.txt","r",stdin);
    // freopen("input.txt","w",stdout);

    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }
    for(ll i=1;i<=n;i++){
        up_heapify(i);
    }
    for(ll i=n;i>0;i--){
        swap(v[1],v[i]);
        down_heapify(1,i-1);
    }
    for(ll i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
