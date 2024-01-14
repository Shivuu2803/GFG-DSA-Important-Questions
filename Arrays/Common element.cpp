class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> result;
            int i = 0, j = 0, k = 0;
    
            while (i < n1 && j < n2 && k < n3)
            {
                if (A[i] == B[j] && B[j] == C[k])
                {
                    if (result.empty() || result.back() != A[i])
                    {
                        result.push_back(A[i]);
                    }
                    
                    i++, j++, k++;
                }
                else
                {
                    if (A[i] <= B[j] && A[i] <= C[k])
                    {
                        i++;
                    }
                    else if (B[j] <= A[i] && B[j] <= C[k])
                    {
                        j++;
                    }
                    else
                    {
                        k++;
                    }
                }
            }
    
            return result;
        }

};
