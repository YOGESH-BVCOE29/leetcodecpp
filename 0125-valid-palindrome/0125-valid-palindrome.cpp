#include <string>
#include <cctype>

class Solution {
public:
    bool isAlphaNum(char ch) {
        return (ch >= '0' && ch <= '9') || 
               (ch >= 'a' && ch <= 'z') || 
               (ch >= 'A' && ch <= 'Z');
    }

    bool isPalindrome(string s) {
        int st = 0, end = s.length() - 1;
        
        while (st < end) {
            // If the character at 'st' is not alphanumeric, move forward
            if (!isAlphaNum(s[st])) {
                st++;
                continue;
            }
            // If the character at 'end' is not alphanumeric, move backward
            if (!isAlphaNum(s[end])) {
                end--;
                continue;
            }
            // Compare lowercase versions of both characters
            if (tolower(s[st]) != tolower(s[end])) {
                return false;
            }
            
            // Move both pointers inward after a successful comparison
            st++;
            end--;
        }
        
        return true;
    }
};