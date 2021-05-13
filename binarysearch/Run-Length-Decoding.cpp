string solve(string s) {
    int i = 0;
    string ans = "";
    while (i < s.size()) {
        int j = i;
        while (isdigit(s[j]) && (j < s.size())) {
            j ++;
        }
        int a = stoi(s.substr(i, j - i + 1));
        int k = j;
        while (isalpha(s[k]) && k < s.size()) {
            k ++;
        }
        auto t = s.substr(j, k - j);
        for (int k = 0; k < a; ++ k) {
            ans += t;
        }
        i = k;
    }    
    return ans;
}