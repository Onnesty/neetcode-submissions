class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        int Max = 0;

        unordered_map<int,int> NumMap; // First = Number | Second = Count


        for (int i : nums) {
            NumMap[i]++;
            if (NumMap[i] > Max) Max = NumMap[i];
        }


        map<int,vector<int>> FrequencyMap;

        vector<int> Output;


        for (auto& Pair : NumMap) {
            FrequencyMap[Pair.second].push_back(Pair.first);
        }


        for (auto it = FrequencyMap.rbegin(); it != FrequencyMap.rend(); ++it) {

            auto Pair = *it;
            
            if (Pair.second.size() != 0) {
                for (int i : Pair.second) {
                    if (k == 0) break;
                    Output.push_back(i);
                    k--;
                }
            }
        }


     
        

        return Output;


        
    }
};
