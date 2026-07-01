class Solution {
public:
    bool isPalindrome(string s) {
        

        int Left = 0;
        int Right = s.size() - 1;

        while (Left < Right) {

            cout << "L: " << s[Left] << " | R: " << s[Right] << endl; 

            if ( !isalnum(s[Left]) ) {
                Left++;
                continue;
            }

            if ( !isalnum(s[Right]) ) {
                Right--;
                continue;
            }

            if (toupper(s[Left]) != toupper(s[Right])) return false;

            Left++;
            Right--;
        }

        return true;



        
    }
};
