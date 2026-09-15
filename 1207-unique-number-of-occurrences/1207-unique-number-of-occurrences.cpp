class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        std::unordered_map<int, int> counts;
        
        // Step 1: Count the occurrences of each value
        for (int num : arr) {
            counts[num]++;
        }
        
        std::unordered_set<int> unique_frequencies;
        
        // Step 2: Check if frequencies are unique
        for (auto& pair : counts) {
            int freq = pair.second;
            // If the frequency already exists in the set, it's not unique
            if (unique_frequencies.count(freq)) {
                return false;
            }
            unique_frequencies.insert(freq);
        }
        
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna