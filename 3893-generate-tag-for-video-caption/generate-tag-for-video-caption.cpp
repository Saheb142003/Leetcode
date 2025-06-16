class Solution {
public:
    string generateTag(string caption) {
 stringstream ss(caption);
    string word, result = "#";
    bool firstWord = true;

    while (ss >> word) {
        string cleaned = "";

        // Step 1: Remove non-letter characters
        for (char c : word) {
            if (isalpha(c)) {
                cleaned += c;
            }
        }

        if (cleaned.empty()) continue;

        // Step 2: Format to camelCase
        if (firstWord) {
            for (char &c : cleaned) c = tolower(c);
            firstWord = false;
        } else {
            cleaned[0] = toupper(cleaned[0]);
            for (int i = 1; i < cleaned.size(); i++) {
                cleaned[i] = tolower(cleaned[i]);
            }
        }

        result += cleaned;

        // Step 3: Stop if result exceeds 100 characters
        if (result.size() >= 100) {
            result = result.substr(0, 100);
            break;
        }
    }

    return result;
    }
};