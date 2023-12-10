class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int i,j,count = 0;
        
        for(i=0; i<size; i++)
        {
            count = 0;
            
            for(j=0; j<size; j++)
            {
                if(a[i] == a[j])
                {
                    count++;
                }
            }
            if(count > (size/2))
            {
                return a[i];
            }
        }
        return -1;
    }
};
