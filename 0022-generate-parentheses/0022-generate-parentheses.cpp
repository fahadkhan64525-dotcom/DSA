class Solution {
public:
    vector<string> ans;
    string s;
    void f(int open, int close){
        if(close == 0){
            ans.push_back(s);
            return;
        }

        if(open){
            s += '(';
            f(open-1, close);
            s.pop_back();
        }
        if(close>open){
            s +=')';
            f(open, close-1);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        f(n,n);
        return ans;
        
    }
};