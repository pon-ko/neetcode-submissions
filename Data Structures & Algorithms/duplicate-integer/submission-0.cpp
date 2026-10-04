#include <iostream>
#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> record{};
        for (const int& i : nums)
        {
            if (record.count(i)) return true;
            record.insert(i);
        }
        return false;
    }
};