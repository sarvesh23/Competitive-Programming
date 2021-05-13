bool solve(string s) {
    int len=s.size();
    if(len>26)
    {
        return false;
    }
    else
    {
        sort(s.begin(),s.end());
        for(int i=0;i<len-1;i++)
        {
            if(s[i]==s[i+1])
                return false;
        }
        return true;
    }
}