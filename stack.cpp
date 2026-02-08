class MyStack {
    public:
        int *arr;
        int top;
        int capacity;
    
        MyStack(int n) {
            capacity = n;
            arr = new int[n];
            top = -1;
        }
    
        // push element x
        void push(int x) {
            if (top == capacity - 1)
                return;   // stack full
            arr[++top] = x;
        }
    
        // remove and return top element
        int pop() {
            if (top == -1)
                return -1;  // stack empty
            return arr[top--];
        }
    
        // return top without removing
        int peek() {
            if (top == -1)
                return -1;
            return arr[top];
        }
    
        // check if stack empty
        bool isEmpty() {
            return (top == -1);
        }
    
        // check if stack full
        bool isFull() {
            return (top == capacity - 1);
        }
    };
    