int solve(int x, int y) {
    bitset<32> bitx(x),bity(y);
    int count=0;
    for (int i = 0; i < 32; i++)
    {
           if(bitx.test(i)!=bity.test(i))
                count++;
    }

    return count;
}