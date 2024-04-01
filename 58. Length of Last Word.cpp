#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                if (count == 0) continue; // Skip trailing spaces
                else break; // End of the last word
            } else {
                count++;
            }
        }
        return count;
    }
};
