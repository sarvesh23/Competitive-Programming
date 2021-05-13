string solve(string s) 
{   string encoding = "";
    int count;
 
    for (int i = 0; s[i]; i++)
    {    
        count = 1;
        while (s[i] == s[i + 1]) {
            count++, i++;
        }
        encoding += to_string(count) + s[i];
    }
 
    return encoding;
}