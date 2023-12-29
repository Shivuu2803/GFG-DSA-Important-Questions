class Solution {
  public:
    int setBits(int N) 
    {
        int count = 0;
        
        // Brian Kernighan's algo
        while (N) 
        {
            N &= (N - 1);
            count++;
        }
        
        return count;
    }
};
