class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size()==0) return {}; // Handle empty input

        unordered_map<string, vector<string>> ump; // Hash map to store anagrams

        for(auto str: strs){
            string temp = str; // Create a copy of the string
            sort(temp.begin(), temp.end()); // Sort the copy
            ump[temp].push_back(str); // Add the original string to the list based on the sorted key
        }

        vector<vector<string>> ans; // Resultant vector to store groups of anagrams
        for(auto &it:ump){
            ans.push_back(it.second); // Add each list of anagrams to the result
        }
        return ans;
    }
};