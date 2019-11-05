ll lps(ll i,ll j)
{
    if(i==j)
        return 1;
    if(i==j-1)
    {
        if(s[i]==s[j])
            return 2;
        return 1;
    }
    else if(s[i]==s[j])
        return lps(i+1,j-1)+2;
    return max(lps(i,j-1),lps(i+1,j));
}
