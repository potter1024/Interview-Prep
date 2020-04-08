stack<pair<ll,ll>> st;  // element,min
while(1){
    ll t;
    cin>>t;
    if(t==1){  // insert
        ll x;
        cin>>x;
        if(st.empty()){
            st.push({x,x});
        }
        else{
            st.push({x,min(x,st.top().ss)});
        }
    }
    else if(t==2){  // pop
        st.pop();
    }
    else if(t==3){  // get min
        cout<<st.top().ss<<endl;
    }
}
