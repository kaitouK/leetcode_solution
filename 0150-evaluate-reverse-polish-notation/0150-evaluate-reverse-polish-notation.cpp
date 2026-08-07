class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> num;
        for(auto &y:tokens){
            if(y.size()==1&&y[0]<'0')
            {
                if(num.empty())
                continue;
                int a=num.top();
                num.pop();
                if(num.empty())
                continue;
                int b=num.top();
                num.pop();
                switch(y[0]-'*')
                {
                    case 0:
                    num.push(b*a);
                    break;
                    case 1:
                    num.push(b+a);
                    break;
                    case 3:
                    num.push(b-a);
                    break;
                    case 5:
                    num.push(b/a);
                    break;
                }
            }
            else{
                num.push(stoi(y));
            }
        }
        return num.top();
    }
};