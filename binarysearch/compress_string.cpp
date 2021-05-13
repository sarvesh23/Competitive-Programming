string solve(string s) {
    int len = s.size(),j=0;
    string st;
    for(int i=0;i<len;i++)
    {
        if(s[i]!=s[i+1])
            st.push_back(s[i]);
    }
    
    return st;
}