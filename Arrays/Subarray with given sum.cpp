class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        int curr_sum = arr[0], start = 0, i;
        vector<int> result;

        for (i = 1; i <= n; i++)
        {
            while (curr_sum > s && start < i - 1)
            {
                curr_sum = curr_sum - arr[start];
                start++;
            }

            if (curr_sum == s)
            {
                result.push_back(start + 1); 
                result.push_back(i);
                return result;
            }

            if (i < n)
            {
                curr_sum = curr_sum + arr[i];
            }
        }

        result.push_back(-1);
        return result;
    }
};
