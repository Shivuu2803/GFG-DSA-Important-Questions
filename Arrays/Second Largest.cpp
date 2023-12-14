class Solution
{
public:
	int print2largest(int arr[], int n) 
	{
	    int maxElement = INT_MIN;
        for (int i = 0; i < n; i++) 
        {
            maxElement = max(maxElement, arr[i]);
        }

        int secondLargest = INT_MIN;
        for (int i = 0; i < n; i++) 
        {
            if (arr[i] != maxElement) 
            {
                secondLargest = max(secondLargest, arr[i]);
            }
        }

        if (secondLargest == INT_MIN) 
        {
            return -1;
        }

        return secondLargest;
	}
};
