class Solution {
public:
    bool isValid(string s) {

        if (s.length() % 2 != 0) {
            return false;
        }

        stack<char> stack;

        map<char, char> brackets = {
                                        {')', '('},
                                        {'}', '{'},
                                        {']', '['}
                                    };

        for(int i=0; i<s.length(); i++) {
            // if the character is a closing bracket
            if (brackets.contains(s[i])) {
                
                // if stack is not empty
                // check the top which is the opening bracket
                // and the opening bracket corresponding to the closing bracket using the map
                if(!stack.empty() && (stack.top() == brackets.at(s[i]))) {
                    stack.pop();
                    continue;
                }
                // else return false
                else {
                    return false;
                }
            }

            // for a opening bracket, just push
            else{
                stack.push(s[i]);
            }
        }

        if (stack.empty()) {
            return true;
        }

        return false;
        
    }
};