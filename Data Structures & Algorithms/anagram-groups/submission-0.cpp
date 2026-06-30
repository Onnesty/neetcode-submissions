class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {


        vector<vector<string>> Output;

        unordered_map<string, int > StrMap;

        int CurrentEmptyIndex = 0;


        for (string Str : strs) {
            
            string SortedKey = Str;
            sort(SortedKey.begin(), SortedKey.end());

            if (StrMap.find(SortedKey) == StrMap.end()) {
                StrMap[SortedKey] = CurrentEmptyIndex++;
                Output.push_back({Str});
            } else {
                Output[StrMap[SortedKey]].push_back(Str);
            }
        }

        return Output;
        
    }
};
