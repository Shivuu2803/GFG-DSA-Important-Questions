class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) 
    {
    
        if(n==1)
        {
            return 1;
        }
        
        int sum =0;
        for(int i =0; i <n; i++)
        {
            sum += a[i];
        }
        
        int left_sum =0;
        for(int i =0; i < n; i++)
        {
            sum -= a[i];
            if(sum == left_sum)
            {
                return i+1; 
            }
            
            left_sum += a[i];
        }
        return -1;
    }

};
