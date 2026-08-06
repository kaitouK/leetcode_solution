class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto &y:s){
            if(st.empty()&&(y=='}'||y==']'||y==')'))return false;
            if(y=='('||y=='['||y=='{')
            st.push(y);
            else
            if((y==')'&&st.top()=='(')||(y==']'&&st.top()=='[')||(y=='}'&&st.top()=='{'))
            st.pop();
            else
            return false;
        }
        return st.empty();
    }
};