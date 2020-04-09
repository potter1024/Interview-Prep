vi v(1000);
void merge_sort(ll a,ll b){
    if(a==b){
        return;
    }
    if(a==b-1){
        if(v[a]>v[b]){
            swap(v[a],v[b]);
        }
        return;
    }
    ll mid=(a+b)/2;
    merge_sort(a,mid);
    merge_sort(mid+1,b);
    vi out(b-a+1);
    merge(v.begin()+a,v.begin()+mid+1,v.begin()+mid+1,v.begin()+b+1,out.begin());
    for(ll i=0;i<b-a+1;i++){
        v[i+a]=out[i];
    }
    return;
}
