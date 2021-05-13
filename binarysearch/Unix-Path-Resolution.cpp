vector<string> solve(vector<string>& path) {
    int l=path.size();
    vector<string> s;
    for(auto i=path.begin();i!=path.end();i++)
    {
        if(*i!="."&&*i!="..")
        {
            s.push_back(*i);
        }
        else if(*i=="..")
        {
            if(!s.empty())
            {
                s.pop_back();
            }
        }
    }
    /*vector<string> v;
    while(!s.empty())
    {
        v.push_back(s.top());
        s.pop();
    }*/
    return s;
}