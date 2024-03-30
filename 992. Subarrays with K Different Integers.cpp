#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMostKDistinct(nums, k) - atMostKDistinct(nums, k - 1);
    }
    
private:
    int atMostKDistinct(const vector<int>& nums, int k) {
        int count = 0;
        int left = 0;
        unordered_map<int, int> freq;
        for (int right = 0; right < nums.size(); ++right) {
            if (freq[nums[right]] == 0) k--;
            freq[nums[right]]++;
            while (k < 0) {
                freq[nums[left]]--;
                if (freq[nums[left]] == 0) k++;
                left++;
            }
            count += right - left + 1;
        }
        return count;
    }
};
