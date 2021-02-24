class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int theSum = 0; 
    int rightSum = 0;
    for (int i : nums)
	    theSum += i;
    for (int i = 0; i <= (nums.size() - 1); i++) {
	    if (rightSum==(theSum-(nums[i]+rightSum)))
		    return i ;
        else 
            rightSum+=nums[i] ;
}
    return -1 ;
    }
};