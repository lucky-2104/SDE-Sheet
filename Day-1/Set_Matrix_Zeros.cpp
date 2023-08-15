class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        vector<vector<int>> marked(matrix.size() , vector<int>(matrix[0].size(),0));
        for(int i = 0 ; i < matrix.size() ; i++)
        {
            for(int j = 0 ; j < matrix[0].size();j++)
            {
                if(matrix[i][j] == 0 and marked[i][j] == 0)
                {
                    int tempi = i,tempj = j;

                    while(i >= 0)
                    {
                        if(matrix[i][j] != 0 )
                        {
                            matrix[i][j] = 0;
                            marked[i][j] = 1;
                        }
                        i--;
                    }
                    i = tempi;
                    while(i < matrix.size()){
                        if(matrix[i][j] != 0){
                        matrix[i][j] = 0;
                        marked[i][j] = 1;
                        }
                        i++;
                    }
                    i = tempi;
                    while(j >= 0)
                    {
                        if(matrix[i][j] != 0){
                        matrix[i][j] = 0;
                        marked[i][j] = 1;
                        }
                        j--;
                    }
                    j = tempj;
                    while(j < matrix[0].size())
                    {
                        if(matrix[i][j] != 0){
                        matrix[i][j] = 0;
                        marked[i][j] = 1;
                        }
                        j++;
                    }
                    j = tempj;
                }

            }
        }
    }
};