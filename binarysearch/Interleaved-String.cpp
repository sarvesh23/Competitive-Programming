string solve(string s1, string s2) {
    int len1 = s1.size(),len2= s2.size();
    string s;
    if(len1==len2)
    {
        int i=0;
        while(i!=len1)
        {
            s.push_back(s1[i]);
            s.push_back(s2[i]);
            i++;
        }
    }
    else if(len1 > len2)
    {   int i=0;
        while(i!=len2)
        {
            s.push_back(s1[i]);
            s.push_back(s2[i]);
            i++;
        }
        while(i!=len1)
        {
            s.push_back(s1[i]);
            i++;
        }
    }
    else
    {
        int i=0;
        while(i!=len1)
        {
            s.push_back(s1[i]);
            s.push_back(s2[i]);
            i++;
        }
        while(i!=len2)
        {
            s.push_back(s2[i]);
            i++;
        }
    }
    return s;
}
