ll n;
vi v(1000000);
void max_heapify (ll i){
    ll left = 2*i;
    ll right = 2*i +1;
    ll largest=i;
    if(left<=n && v[left]>v[i])
          largest = left;
    else
         largest = i;
    if(right<=n && v[right]>v[largest])
        largest=right;
    if(largest!=i){
        swap(v[i],v[largest]);
        max_heapify(largest);
    }
 }
void build_maxheap (){    // order of O(n)
    for( ll i = n/2 ; i >= 1 ; i--)
    max_heapify (i);
}
