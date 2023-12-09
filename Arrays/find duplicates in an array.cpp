class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) 
    {
        sort(arr, arr+n);
        
        vector<int> vec;
        
        for(int i=0; i < n-1; i++)
        {
            if(arr[i] == arr[i+1])
            {
                vec.push_back(arr[i]);
                while(arr[i+1] == arr[i])
                {
                    i++;
                }
            }
        }
        if(vec.size()==0)
        {
            vec.push_back(-1);
        }
        return vec; 
    }
};
