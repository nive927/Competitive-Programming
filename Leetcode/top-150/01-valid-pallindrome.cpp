// Editorial Solution: Valid Pallindrome
class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
            while (i < j && !isalnum(s[i])) i++; // We can simply ignore non-alphanumeric characters by continuing to traverse further.
            while (i < j && !isalnum(s[j])) j--;

            // Continue traversing inwards until the pointers meet in the middle.
            if (tolower(s[i]) != tolower(s[j])) return false;
        }

        return true;
    }
};

// My solution to the problem: Valid Pallindrome

class Solution {
public:
    bool isPalindrome(string s) {

        
        string str = "";
        bool result = true;

        // empty string is a pallindrome
        if (s.length() == 0 || s.length() == 1) {
            return true;
        }

        // // odd length string cannot be a pallindrome
        // if (s.length() % 2 != 0) {
        //     return false;
        // }

        // preprocess the string
        // - retain only alphanumeric characters - automatically removes spaces
        // - make all lowercase

        for (int i=0; i<s.length(); i++) {
            if (isalnum(s[i])) {
                str += tolower(s[i]);
            }
        }

        int ws = str.length();

        // simultaneous looping - two pointers 
        for(int i=0, j=ws-1; i<ws/2; i++, j--) {
            
            // cout << str[i] << " " << str[j];
            // cout << "\n\n";

            if (str[i] != str[j]) {
                result = false;
                break;
            }
        }

        cout << "processed string: " << str;
        return result;
        
    }
};