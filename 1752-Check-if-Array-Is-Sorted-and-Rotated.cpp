class Solution {
public:
    bool check(vector<int>& A) {
        int n=A.size(),cnt=0;

        for(int i=0;i<n;i++)
            if(A[i]>A[(i+1)%n])
                cnt++;            

        return cnt<=1;
    }    
};