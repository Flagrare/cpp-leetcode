// Last updated: 6/10/2025, 11:10:34 PM
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        if (ransomNote.length() > magazine.length())
            return false;

        unordered_map<char, int> char_map;

        for (char& ch : magazine)
            char_map[ch] += 1;

        for (char& rn : ransomNote) {
            if (char_map[rn] == 0) {
                return false;
                break;
            }
            char_map[rn] -= 1;
        }
        return true;
    }
};