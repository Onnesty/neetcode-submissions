class Solution {
public:
    int trap(vector<int>& height) {

        int Output = 0; 

        int MaxLeft = 0;

        vector<int> MaxRight = {0};

        for (int End = height.size()-1; End >= 0; End--) {
            
            int Height = height[End];

            if (Height > MaxRight[0]) {
                MaxRight.insert(MaxRight.begin(), Height);
            } else {
                MaxRight.insert(MaxRight.begin(), MaxRight[0]);
            }
        }
        

        for (int i = 0; i < height.size()-1; i++) {

            int Units = min(MaxLeft, MaxRight[i]) - height[i];

            cout << "Checking: " << i << " | Left: " << MaxLeft << " | Right: " << MaxRight[i] << endl;
            cout << "Units: " << Units << endl;

            if (height[i] > MaxLeft) MaxLeft = height[i];


            if (Units <= 0) continue;

            Output += Units;

            

        }

        return Output;
        
    }
};
