class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N)
    {
        unordered_map<ll, int> freqA, freqB;

        for (int i = 0; i < N; i++)
        {
            freqA[A[i]]++;
        }

        for (int i = 0; i < N; i++)
        {
            freqB[B[i]]++;
        }

        return freqA == freqB;
    }
};
