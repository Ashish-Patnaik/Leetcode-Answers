class Solution {
public:
    vector<int> rearrangeArray(vector<int>& A) {
        int n=A.size();
        vector<int> ans(n,0);
        int pos=0, neg=1;
        for(int i=0;i<n;i++){
            if(A[i]<0){
                ans[neg]=A[i];
                neg+=2;
            }
            else{
                ans[pos]=A[i];
                pos+=2;
            }
        }
        return ans;
        
    }
};