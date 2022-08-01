class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        vector<int> vec;
    unordered_map<int,int> imap;
    for(int i=0;;i++)
    {
       auto it = imap.find(target - nums[i]);
        
        if (it != imap.end()) 
            return vector<int> {i, it->second};
            
        imap[nums[i]] = i;
    }
        return vec;
}
};