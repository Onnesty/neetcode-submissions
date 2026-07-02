class MinStack {
public:

    class Node {

        public:
        int Val;
        int Min;
        Node* Next ;

        Node(int val, int min, Node* node = nullptr) {
            Val = val;
            Min = min;
            Next = node;
        }
    };

    Node* Head = new Node(0, INT_MAX);

    MinStack() {
        
    }
    
    void push(int val) {
        
        Node* NewNode = new Node(val, min(Head->Min, val), Head);
        Head = NewNode;
    }
    
    void pop() {

        Node* OldNode = Head;
        
        Head = Head->Next;

        delete(OldNode);

        
    }
    
    int top() {

        return Head->Val;
        
    }
    
    int getMin() {

        return Head->Min;
        
    }
};
