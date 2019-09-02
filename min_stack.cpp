// vector pair solution
class MinStack {
public:
    /** initialize your data structure here. */
    vector<pair<int,int> > minStackDS;
    
    void push(int x) {
        if(minStackDS.size()==0){
            pair<int,int> pa;
            pa.first = x;
            pa.second = x;
            minStackDS.push_back(pa);
        } else {
            pair<int,int> pa;
            int curr_min_value = min(minStackDS[minStackDS.size()-1].second,x);
            pa.first = x;
            pa.second = curr_min_value;
            minStackDS.push_back(pa);
        }
    }
    
    void pop() {
        if(minStackDS.size()==0){
            return;
        }
        minStackDS.pop_back();
    }
    
    int top() {
        if(minStackDS.size()==0){
            return 0;
        }
        return minStackDS[minStackDS.size()-1].first;
    }
    
    int getMin() {
        if(minStackDS.size()==0){
            return 0;
        }
        return minStackDS[minStackDS.size()-1].second;
    }
};


// Two stack solution
class MinStack {
public:
    vector<int> vec,minimum_values;
    
    void push(int x) {
        if(vec.size()==0){
            vec.push_back(x);
            minimum_values.push_back(x);
        } else {
            vec.push_back(x);
            if(minimum_values[minimum_values.size()-1] >= x){
                minimum_values.push_back(x);
            }
        }
    }
    
    void pop() {
        if(vec.size()==0){
            return;
        }
        if(minimum_values[minimum_values.size()-1] == vec[vec.size()-1]){
            vec.pop_back();
            minimum_values.pop_back();
        } else {
            vec.pop_back();
        }
    }
    
    int top() {
        if(vec.size() == 0){
            return 0;
        }
        return vec[vec.size()-1];
    }
    
    int getMin() {
        if(minimum_values.size()==0){
            return 0;
        }
        return minimum_values[minimum_values.size()-1];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */