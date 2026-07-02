class Solution {
public:
    bool isValid(string s) {
    
        vector<char> Stack;
        Stack.reserve(s.size());

        for (char Ch : s) {
            
            if (Ch == '(' || Ch == '{' || Ch == '[') {
                Stack.push_back(Ch);

            } else if (Ch == ')'){

                if (Stack.size() == 0 || Stack.back() != '(') return false;
                else Stack.pop_back();

            } else if (Ch == '}'){

                if (Stack.size() == 0 || Stack.back() != '{') return false;
                else Stack.pop_back();

            } else if (Ch == ']'){

                if (Stack.size() == 0 || Stack.back() != '[') return false;
                else Stack.pop_back();

            } 
            
        }

        if (Stack.size() != 0) return false;


        return true;
        
    }
};
