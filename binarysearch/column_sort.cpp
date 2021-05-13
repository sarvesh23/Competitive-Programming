vector<vector<int>> solve(vector<vector<int>>& matrix) {
    int r=matrix.size(),c=matrix[0].size();
    for(int k=0;k<c;k++)
    {
        vector<int> temp(r);
        for(int i=0;i<r;i++)
        {
            temp[i]=matrix[i][k];
        }
        sort(temp.begin(),temp.end());
        for(int i=0;i<r;i++)
        {
            matrix[i][k]=temp[i];
        }
    }
    return matrix;
}