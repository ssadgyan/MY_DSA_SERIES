class Solution {
public:
    string sortString(string s) {
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }

        string result;
        while (true) {
            // Forward pass (a to z)
            bool hasChar = false;
            for (int i = 0; i < 26; i++) {
                if (freq[i] > 0) {
                    result += (char)('a' + i);
                    freq[i]--;
                    hasChar = true;
                }
            }

            // Backward pass (z to a)
            for (int i = 25; i >= 0; i--) {
                if (freq[i] > 0) {
                    result += (char)('a' + i);
                    freq[i]--;
                    hasChar = true;
                }
            }

            // If no characters were added in the last iteration, break
            if (!hasChar) {
                break;
            }
        }

        return result;
    }
};