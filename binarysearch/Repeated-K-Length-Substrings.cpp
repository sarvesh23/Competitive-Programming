int solve(string s, int k) {
    map<string,int> m;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        m[s.substr(i,k)]++;
    }
    int count = 0;
    for(auto i=m.begin();i!=m.end();i++)
    {
        if(i->second>1)  
        {
            count++;
            // cout<<s.substr(i,k)<<' ';
        }    
    }
    return count;
}