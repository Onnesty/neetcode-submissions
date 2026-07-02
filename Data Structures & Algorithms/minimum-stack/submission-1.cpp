class MinStack {
public:

    vector<int> Stack;

    map<int,int> IntMap;



    int MinElement = INT_MAX;

    MinStack() {
        
    }
    
    void push(int val) {
        Stack.push_back(val);

        IntMap[val]++;
    }
    
    void pop() {

        int val = Stack.back();
        Stack.pop_back();

        IntMap[val]--;

        if (IntMap[val] == 0) IntMap.erase(val);
    }
    
    int top() {
        return Stack.back();
    }
    
    int getMin() {
        return IntMap.begin()->first;
    }
};
