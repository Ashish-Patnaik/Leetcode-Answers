class Solution {
public:
    int search(vector<int>& nums, int key) {
        int n=nums.size();
        int s=0, e=n-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==key) return mid;
            if(nums[s]<=nums[mid]){
                if(nums[s]<=key && nums[mid]>=key){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else{
                if(nums[mid]<=key && key<=nums[e]){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
        return -1;
        
    }
};