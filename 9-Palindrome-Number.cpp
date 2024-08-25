class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long rev=0;
        long long dup=x;
        while(x>0){
            int ld=x%10;
            rev=(rev*10)+ld;
            x=x/10;
        }
        
        if(rev==dup){
            return true;
        }
        else {
            return false;
        }
    }
};