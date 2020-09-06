class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> templist(nums);
        sort(templist.begin(),templist.end());
        vector<int>::iterator first, last;
        first = templist.begin();
        last = templist.end()-1;
        while (first != last) {
            if (*first + *last > target) {
                last--;
            }
            else if (*first + *last < target) {
                first++;
            }
            else {
                break ;
            }
        }
        if (*first != *last) {
            first = find(nums.begin(), nums.end(), *first);
            last = find(nums.begin(), nums.end(), *last);
        }
        else {
            first = find(nums.begin(), nums.end(), *first);
            last = find(first+1, nums.end(), *last);
        }
        
        if  (int(first - nums.begin()) < int(last - nums.begin())) {
            return {int(first - nums.begin()), int(last - nums.begin())};
        }  
        else {
            return {int(last - nums.begin()), int(first - nums.begin())};
        }

    }
};