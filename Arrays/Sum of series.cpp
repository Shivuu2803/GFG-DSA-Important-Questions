class Solution{
public:
	// function to return sum of  1, 2, ... n
	long long seriesSum(int n) 
	{
	    if (n % 2 == 0) 
	    {
            return static_cast<long long>(n / 2) * (n + 1);
        } 
        else 
        {
            return static_cast<long long>(n) * ((n + 1) / 2);
        }
	}
};
