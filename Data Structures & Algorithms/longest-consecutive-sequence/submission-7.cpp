class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if (nums.size() == 0) return 0;

        sort(nums.begin(), nums.end());

        int Output = 1; 

        int CurrentLen = 1;
        int Prev = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            int Num = nums[i];

            //cout << "Num:" << Num << endl;
            //cout << "Prev: " << Prev << endl;

            if (Num == Prev+1) {
                CurrentLen++;
                if (CurrentLen > Output) Output = CurrentLen;

                //cout << "Increment: " << CurrentLen << endl;

            } else if (Num != Prev) {
                CurrentLen = 1;
            }

            Prev = Num;

        }

       

        return Output;
        
    }
};
