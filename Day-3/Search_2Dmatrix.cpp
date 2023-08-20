class Solution {
public:
    bool binary_Search(vector<int> arr , int target)
    {
        int s = 0 , h = arr.size()-1;

        while(s <= h)
        {
            int mid = s + ((h-s)/2);
            if(arr[mid] == target)
            return true;
            if(arr[mid] < target)
            s = mid+1;
            else
            h = mid-1;
        }
        return false;

    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int s = 0 , l = matrix.size()-1;

        while(s <= l)
        {
            int mid = s + ((l-s)/2);

            if(matrix[mid][0] <= target and matrix[mid][matrix[0].size()-1] >= target)
            {
                if(binary_Search(matrix[mid],target) == true)
                return true;
                else
                return false;
            }

            if(matrix[mid][0] > target)
            l = mid-1;
            if(matrix[mid][matrix[0].size()-1] < target)
            s = mid+1;
        } 
        return false;
        
    }
};