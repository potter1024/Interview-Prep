#include <bits/stdc++.h>
using namespace std;
#define sz(a)               int((a).size())
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
#define output(a,n)         for(long long i=0;i<n;i++)cout<<a[i]<<" "
#define reset(a,n)          memset(a,n,sizeof(a))   // n can only be 0 or -1
#define ep                  1e-10
#define seed                13331
#define pi                  pair<ll,ll>
#define inf                 10e9
#define N                   1000000
#define minp                vector<ll>, greater<ll>
#define M                   1000000007
#define MM                  1000000009
#define pie                 3.1415926535897932384626433832795
#define eu                  2.718281828459045
#define                     she_taught_me_to_code cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);cin.tie(NULL);    clock_t startTime=clock();
#define time     cout<<(double(clock()-startTime )/(double)CLOCKS_PER_SEC)*1000<<" ms"<<endl;
#define debug(k) cout<<#k<<" = "<<k<<endl;

/************************************Debugging Steps****************************************/

// If aplying ceil,floor,pow,etc convert it into integer (might make you eat shit if you don't
// Whenever using stacks,queues,etc always check that their top / front / back elements are not accessed when they are empty, thus causing runtime error
// Think twice before using greedy
// Remember losing 1 or 2 minutes is better than a penalty of 10 minutes
// Use log2 instead of log()/log(2) to avoid shitty errors
// If declaring a large array, define it globally
// Always initialise anything while declaring, which will not be taken as input
// In case of a problem having decimal calculations, try declaring everything in double rather than typecasting in each step
// always declare the array with n+5 elements to avoid unexpected errors
// Every problem cannot be solved by DFS easily, think of BFS too

bool sortbysec(const pair<ll,pair<ll,ll> > &a,const pair<ll,pair<ll,ll> > &b)
{
    return (a.ss.ff < b.ss.ff);
}
bool sortbyth(const pair<ll,pair<ll,ll> > &a,const pair<ll,pair<ll,ll> > &b)
{
    return (a.ss.ss < b.ss.ss);
}
ll gcd(ll a,ll b)
{
    return b?gcd(b, a % b):a;
}
ll lcm(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}
ll min(ll a,ll b)
{
    return a<b?a:b;
}
ll min(ll a,ll b,ll c)
{
    return min(min(a,b),c);
}
ll min(ll a,ll b,ll c,ll d)
{
    return min(min(a,b,c),d);
}
ll max(ll a,ll b)
{
    return a>b?a:b;
}
ll max(ll a,ll b,ll c)
{
    return max(max(a,b),c);
}
ll max(ll a,ll b,ll c,ll d)
{
    return max(max(a,b,c),d);
}
struct node_tree{
    int data;
    node_tree* left=NULL;
    node_tree* right=NULL;
};
struct node_list{
    int data;
    node_list* prev=NULL;
    node_list* next=NULL;
};
// let's do this inorder
node_list* now=NULL;
void btod(node_tree* node)
{
    if(node->left)
        btod(node->left);
    node_list* noww=new node_list;
    noww->data=node->data;
    noww->prev=now;
    now=noww;
    if(node->right)
        btod(node->right);
    noww->next=now;
}
void print(node_list* head)
{
    node_list* current=head;
    while(current!=NULL)
    {
        cout<<current->data<<" ";
        current=current->prev;
    }
    cout<<endl;
}
int main()
{
    she_taught_me_to_code

    // freopen("input.txt","r",stdin);
    // freopen("input.txt","w",stdout);

    node_tree* n=new node_tree();
    n->data=3;
    n->left=new node_tree();
    n->left->data=4;
    n->right=new node_tree();
    n->right->data=1;
    n->left->left=new node_tree();
    n->left->left->data=7;
    n->left->right=new node_tree();
    n->left->right->data=6;
    n->right->left=new node_tree();
    n->right->left->data=0;
    n->right->right=new node_tree();
    n->right->right->data=2;
    btod(n);
    print(now);
}
