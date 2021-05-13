vector<vector<int>> solve(vector<vector<int>>& matrix) {
    vector<vector<int>> transpose=matrix;
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {  
            transpose[j][i] = matrix[i][j];
        }
    }
    return transpose;
}