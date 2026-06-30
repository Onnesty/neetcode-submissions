class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> Numbers;

        for (int& i : nums) {
            
            if (Numbers.find(i) != Numbers.end()) return true;
            Numbers.insert(i);
        }

        return false;
        
    }
};