class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> Prefix;
        vector<int> Suffix;


        int CurrentProduct = 1;

        for (int i : nums) {
            Prefix.push_back(CurrentProduct);
            CurrentProduct *= i;
        }
        
        CurrentProduct = 1;
        for (int i = nums.size()-1; i >= 0; i--) {
            Suffix.insert(Suffix.begin(), CurrentProduct);
            CurrentProduct *= nums[i];
        }


        vector<int> Output;

        for (int i = 0; i < nums.size(); i++ ) {
            Output.push_back(Prefix[i] * Suffix[i]);
        }

        return Output;

    }
};
