int solve(int n) {

    double PHI = 1.6180339;
    int f[6] = { 0, 1, 1, 2, 3, 5 };
     
    if (n < 6)
        return f[n];
    int t = 5, fn = 5;
 
    while (t < n) {
         fn = round(fn * PHI);
         t++;
    }
 
    return fn;  
}