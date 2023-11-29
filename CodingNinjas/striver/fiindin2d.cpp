bool searchMatrix(vector<vector<int>>& vect, int target) {
        for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            if(target==vect[i][j])
            return true;
        }    
        
    }
    return false;
  
}