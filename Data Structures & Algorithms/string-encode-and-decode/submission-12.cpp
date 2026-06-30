class Solution {
public:

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

                if (CharsLeft == 0) Output.push_back("");
                
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
