class Solution {
public:
    bool isValid(string s) {
    
        stack<char> ParenthesisStack;

        for (char Ch : s) {

            if (Ch == '(' || Ch == '{' || Ch == '[') {
                ParenthesisStack.push(Ch);
            } else {

                if (ParenthesisStack.size() == 0) return false;

                if ( (ParenthesisStack.top() == '(' && Ch != ')')
                ||
                    (ParenthesisStack.top() == '{' && Ch != '}')
                ||
                    (ParenthesisStack.top() == '[' && Ch != ']')

                ) return false;

                ParenthesisStack.pop();
            }
        }

        if (ParenthesisStack.size() != 0) return false;


        return true;
        
    }
};
