class Solution {
public:
    bool isAnagram(string s, string t) {
        if ( s.length() != t.length() ) {return false;}

        map<char, int> frequency;

        for ( int i = 0; i < s.length(); i++ ) {
            frequency[s.at(i)]++;
        }

        for ( int k = 0; k < t.length(); k++) {
            frequency[t.at(k)]--;
            if(frequency[t.at(k)] == 0) {
                frequency.erase(t.at(k));
            };
        }

        return frequency.empty();
    }
};
