class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        sort(A, A + n);

        for (int i = 0; i < n - 2; i++) 
        {
            int left = i + 1;
            int right = n - 1;

            while (left < right) 
            {
                int currentSum = A[i] + A[left] + A[right];

                if (currentSum == X) 
                {
                    return true; 
                } 
                else if (currentSum < X) 
                {
                    left++; 
                } 
                else 
                {
                    right--; 
                }
            }
        }

        return false; 
    }

};
