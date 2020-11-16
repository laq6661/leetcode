class CQueue {
private:
    stack<int> s1,s2;
public:
    void appendTail(int value) {
        s1.push(value);
    }
    
    int deleteHead() {
        int result = -1;
        if(!s2.empty()){
            result = s2.top();
            s2.pop();
        }
        else if(!s1.empty()){
             while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            result = s2.top();
            s2.pop();
        }
        else return -1;
    return result;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
