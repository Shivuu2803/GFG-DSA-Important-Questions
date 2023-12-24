class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        stringstream ss(S);  //creates a stringstream object named ss and initializes it 
        // with the content of the string S. This allows you to treat the string S as if
        // it were a stream, and you can use stream operations like getline to extract
        // individual words from the string.
        
        // Vector to store individual words
        vector<string> words;
        
        // Temporary variable to store each word
        string word;
        
        while (getline(ss, word, '.'))
        {
            words.push_back(word);
        }
        
        reverse(words.begin(), words.end());
        
        string result = "";
        for (int i = 0; i < words.size(); i++)
        {
            result += words[i];
            if (i < words.size() - 1)
                result += '.';
        }

        return result;
    } 
};
