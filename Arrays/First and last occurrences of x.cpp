class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        vector<int> result = {-1, -1};
        
        int low = 0, high = n - 1;
        
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            
            if (arr[mid] == x)
            {
                result[0] = mid;
                high = mid - 1;
            }
            else if (arr[mid] < x)
            {
                low = mid + 1;
            }
            else 
            {
                high = mid - 1;
            }
        }
        
        low = 0, high = n - 1;
        
        while (low <= high) 
        {
            int mid = low + (high - low) / 2;
            
            if (arr[mid] == x) 
            {
                result[1] = mid;
                low = mid + 1;  
            }
            else if (arr[mid] < x) 
            {
                low = mid + 1;
            } 
            else 
            {
                high = mid - 1;
            }
        }
        
        return result;
    }
};
