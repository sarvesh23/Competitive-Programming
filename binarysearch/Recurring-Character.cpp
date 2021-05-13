int solve(string s) {
    int s1[26] = {0};
    for (int i = 0; i < s.length(); i++) {
        if (s1[s[i] - 'a'] == 0)
            s1[s[i] - 'a']++;
        else
            return i;
    }

    return -1;
}