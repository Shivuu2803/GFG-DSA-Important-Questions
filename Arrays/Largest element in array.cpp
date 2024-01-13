class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int maxElement = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > maxElement)
            {
                maxElement = arr[i];
            }
        }

        return maxElement;
    }
};
