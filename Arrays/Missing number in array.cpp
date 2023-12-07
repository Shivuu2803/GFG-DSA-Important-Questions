class Solution
{
    public:
    int missingNumber(vector<int>& array, int n) 
    {
        int size = array.size();
    
        if(size == 1)
        {
            if(array[0] >=2)
            {
                return 1;
            }
            else
            {
                return 1+array[0];
            }
        }
        
        sort(array.begin(), array.end());
    
        for(int i = 0 ; i  < size; i++)
        {
            if(array[i] != i+1)
            {
                i++;
                return  i; 
            }
        }
        return (array[size-1]+1);
    }
};
