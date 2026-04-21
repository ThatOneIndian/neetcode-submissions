class Solution {
public:
    bool isValid(string s) {
        stack<char> par;
        char lastPar;

        //push all open paranthesis to stack
        for(int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] ==  '{' || s[i] == '[') {
                lastPar = s.at(i);
                par.push(lastPar);
            } else {
                if(par.empty()) {return false;}
                if (par.top() == '(' && s[i] == ')') {par.pop(); continue;}
                if (par.top() == '{' && s[i] == '}') {par.pop(); continue;}
                if (par.top() == '[' && s[i] == ']') {par.pop(); continue;} else {return false;} 
            }                       
        }

        if(par.empty()){ return true;} else {return false;}
    }
};
