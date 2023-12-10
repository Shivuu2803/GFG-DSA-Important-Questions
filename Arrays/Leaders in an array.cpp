class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n)
    {
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            int j = i + 1;
            while (j < n)
            {
                if (a[i] < a[j])
                    break;
                j = j + 1;    
            }
            if (j == n)
                ans.push_back(a[i]);
        }
        return ans;
        
    }
};
