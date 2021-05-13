int solve(string s, string t) {
    int st[26],tt[26];
    for(int i=0;i<26;i++)
    {
        st[i]=0;
        tt[i]=0;
    }
    for(int i=0;i<s.size();i++)
    {   int c = int(s[i]) - 97;
        int p = int(t[i]) -97;
        st[c]++;
        tt[p]++; 
    }
    int sums = 0,sumt=0;
    for(int i=0;i<26;i++)
    {   sums += abs(st[i] - tt[i]);
        
    }
    return sums/2;
}