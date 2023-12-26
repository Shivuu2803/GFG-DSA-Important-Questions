bool arraySortedOrNot(int arr[], int n) 
{
    if (n == 1) 
    {
        return true; 
    } 
    else if (n == 2) 
    {
        if (arr[0] <= arr[1]) 
        {
            return true; 
        } 
        else 
        {
            return false; 
        }
    }
    
    for (int i = 0; i < n - 1; i++) 
    {
        if (arr[i] > arr[i + 1]) 
        {
            return false;
        }
    }
    
    return true; 
}
