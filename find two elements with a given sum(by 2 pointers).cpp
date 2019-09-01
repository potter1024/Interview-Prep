    vi v{1,1,2,2,2,3,4,5,5,6,6,7,7,7,8,9,9};        // v should be sorted
    int x=17;
    int i=0,j=v.size()-1;
    while(i<=j)
    {
        if(v[i]+v[j]==x)
        {
            cout<<v[i]<<" "<<v[j]<<endl;
            break;
        }
        else if(v[i]+v[j]>x)
            j--;
        else
            i++;

    }
