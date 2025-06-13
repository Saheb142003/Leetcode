class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
         vector<int> result;
    if (s.size() < p.size()) return result;

    unordered_map<char, int> p_count, window;
    
    for (char c : p) p_count[c]++;

    int left = 0, right = 0, match = 0;

    for (right = 0; right < s.size(); right++) {
        char c = s[right];
        window[c]++;
        
        if (p_count.count(c) && window[c] == p_count[c])
            match++;

        // Shrink window when it's bigger than pattern
        if (right - left + 1 > p.size()) {
            char left_char = s[left];
            if (p_count.count(left_char) && window[left_char] == p_count[left_char])
                match--;
            window[left_char]--;
            left++;
        }

        // If all characters match
        if (match == p_count.size())
            result.push_back(left);
    }

    return result;
}
};