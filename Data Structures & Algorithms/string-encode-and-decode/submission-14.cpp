class Solution {
public:


    /* 

    The basic idea of this solution is that it would alternate between wordsize and the actual chars 
    to be used for the word.
    Ex: ["Hello", "World"] = "5Hello5World"

    But the constraints specify a string length of 0 to 200. I definitely cannot put something like
    "120wo...rd150he...llo". So instead of numbers to potentially multiple chars I will have to use
    unsigned integers where the range is 0 - 255. I cannot use char on this one since the sizes or lengths
    of the strings are only positive and chars can only go up to 127

    The first char will be the size of the string and thus it will be read as an unsigned char.This size
    is then monitored to check how many chars are left to read, meaning for every char after this the 
    size counter will decrease, depicting the number of chars left to read. The 
    chars after it (until the size count diminishes to 0) will be read as signed chars. And when the 
    size counter is 0, meaning theres no more chars to read, it means that the string is over and that
    the current char is the size for the next string to read.

    Minor adjustments are added for edge cases.  

    */

    string encode(vector<string>& strs) {

        string Output = "";

        for (string& str : strs) {

            Output += static_cast<unsigned char>(str.size());
            Output += str;
        }

        Output += static_cast<unsigned char>(1); // End delimeter

      
       
        return Output;

    }

    vector<string> decode(string s) {

        int CharsLeft = 0;

        string CurrentStr = "";

        vector<string> Output = {};

        for (int i = 0; i < s.size(); i++) {

            if (CharsLeft == 0) { // Then the current char is the delimeter and is an unsigned char

                unsigned char Ch = s[i];

                if (CurrentStr.size() != 0) Output.push_back(CurrentStr);

                CharsLeft = static_cast<int>(Ch);

                if (CharsLeft == 0) Output.push_back(""); // If its still 0 then it means an empty string got inputted
                
                CurrentStr = "";
                continue;
            } else { // Its a signed char

                char Ch = s[i];

                CurrentStr += Ch;
                CharsLeft--;
            }
        }

 


        return Output;

    }
};
