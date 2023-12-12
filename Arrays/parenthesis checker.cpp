class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> st;
        
        for (char c : x) 
        {
            if (c == '(' || c == '{' || c == '[') 
            {
              st.push(c);
            }
            else if (c == ')' || c == '}' || c == ']') 
            {
              if (st.empty()) 
              {
                return false;
              }
              
              char top = st.top();
              
              st.pop();
              
              if (c == ')' && top != '(') 
              {
                return false;
              }
              if (c == '}' && top != '{') 
              {
                return false;
              }
              if (c == ']' && top != '[') 
              {
                return false;
              }
            }
        }
        
        return st.empty();
    }

};
