class Solution {
public:
    vector<int> generateRow(int row)
    {
        long long ans = 1;
        vector<int> ansrow ;
        ansrow.push_back(1);

        for(int col = 1 ; col < row ; col++)
        {
            ans = ans * (row - col);
            ans = ans / (col) ;
            ansrow.push_back(ans);
        } 
        return ansrow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        for(int i = 1 ; i <= numRows ; i++)
        {
            pascal.push_back(generateRow(i));

        }
        return pascal;
        
    }
};