#include <bits/stdc++.h>
using namespace std;
#define sz(a)               ll((a).size())
#define ll                  long long
#define int                 ll
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
#define input(a,n)          for(long long i=0;i<n;i++)cin>>a[i]
#define output(a,n)         for(long long i=0;i<n;i++)cout<<a[i]<<" "
#define inputt(a,n,m)       for(ll i=0;i<n;i++)for(ll j=0;j<m;j++)cin>>a[i][j]
#define outputt(a,n,m)      for(ll i=0;i<n;i++){for(ll j=0;j<m;j++)cout<<a[i][j]<<" ";cout<<endl;}
#define reset(a,n)          memset(a,n,sizeof(a))   // n can only be 0 or -1
#define pi                  pair<ll,ll>
#define inf                 LLONG_MAX
#define N                   1000000
#define minp                vector<ll>, greater<ll>
#define M                   1000000007
#define MM                  1000000009
#define pie                 3.1415926535897932384626433832795
#define                     she_taught_me_to_code cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);cin.tie(NULL);    clock_t startTime=clock(); cout<<fixed<<setprecision(12);
#define time     cout<<(double(clock()-startTime )/(double)CLOCKS_PER_SEC)*1000<<" ms"<<endl;
#define debug(k) cout<<"\t-> "<<#k<<" = "<<k<<endl;

struct node{
    int data;
    node* next;
};
void insert(int data,node** head){
    if(*head==NULL){
        node* n=new node;
        n->data=data;
        n->next=NULL;
        *head=n;
        return;
    }
    node* current=*head;
    while(current->next!=NULL){
        current=current->next;
    }
    node* n=new node;
    n->data=data;
    n->next=NULL;
    current->next=n;
}
void print(node* head){
    node* current=head;
    while(current!=NULL){
        cout<<current->data<<" ";
        current=current->next;
    }
}
void find_middle(node* head){
    node* hare=head;
    node* tortoise=head;
    while(hare->next !=NULL && hare->next->next!=NULL){
        hare=hare->next->next;
        tortoise=tortoise->next;
    }
    if(hare->next==NULL){
        cout<<tortoise->data<<endl;
    }
    else{
        cout<<tortoise->next->data<<endl;
    }
}
void delete_middle(node* head){
    node* hare=head;
    node* tortoise=head;
    if(hare->next==NULL || hare->next->next==NULL){
        tortoise->next=tortoise->next->next;
        return;
    }
    while(1){
        hare=hare->next->next;
        if(hare->next==NULL || hare->next->next==NULL){
            tortoise->next=tortoise->next->next;
            return;
        }
        tortoise=tortoise->next;
    }
}
void remove_duplicates(node* head){
    for(node* current=head;current;){
        node* start=current;
        int x=current->data;
        while(current && current->data==x){
            current=current->next;
        }
        start->next=current;
    }
}
node* merge2SortedLL(node* head1, node* head2){
    if(!head1){
        return head2;
    }
    if(!head2){
        return head1;
    }
    if(head1->data <= head2->data){
        head1->next=merge2SortedLL(head1->next,head2);
        return head1;
    }
    else{
        head2->next=merge2SortedLL(head2->next,head1);
        return head2;
    }
}
void printNth(node* head,int n){
    if(n==1){
        cout<<head->data<<endl;
        return;
    }
    if(head->next==NULL){
        cout<<"error\n";
        return;
    }
    printNth(head->next,n-1);
}
void printNthfromLast(node* head,int n){
    node* root=head;
    while(head && --n){
        head=head->next;
    }
    if(n){
        cout<<"error\n";
        return;
    }
    while(head->next){
        root=root->next;
        head=head->next;
    }
    cout<<root->data<<endl;
}
node* reverseLL(node* head){
    node* prev=NULL;
    node* current=head;
    while(current){
        node* temp=current->next;
        current->next=prev;
        prev=current;
        current=temp;
    }
    return prev;
}
bool checkPalindrome(node* head){
    node* tortoise=head;
    node* hare=head;
    while(1){
        if(hare->next==NULL || hare->next->next==NULL){
            break;
        }
        tortoise=tortoise->next;
        hare=hare->next->next;
    }
    node* middle=tortoise;
    tortoise->next=reverseLL(tortoise->next);
    node* start1=head;
    node* start2=tortoise->next;
    while(start1!=middle){
        if(start1->data!=start2->data){
            tortoise->next=reverseLL(tortoise->next);
            return 0;
        }
        start1=start1->next;
        start2=start2->next;
    }
    tortoise->next=reverseLL(tortoise->next);
    return 1;
}
int32_t main(){

    she_taught_me_to_code

    // freopen("input.txt","r",stdin);
    // freopen("input.txt","w",stdout);


}
