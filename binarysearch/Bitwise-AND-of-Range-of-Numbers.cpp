int solve(int start, int end) {
    bitset<32> bs(start);
    //cout<<bs;
    for(int i=start+1;i<=end;i++)
    {    bitset<32> pr(i);
         bs = bs&pr;
         if(bs==bitset<32>(0))
            return 0;
        //cout<<bs.to_ulong();
    } 
    return bs.to_ulong();
}