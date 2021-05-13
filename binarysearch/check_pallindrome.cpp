bool solve(string s) {
    string st=s;
    reverse(st.begin(),st.end());
    if(st==s)
        return true;
    return false;
}