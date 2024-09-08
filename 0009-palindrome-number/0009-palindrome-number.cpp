class Solution {
public:
    bool isPalindrome(int x) {
       long int rev=0;
        long int temp=x;
        while(x>0  ){
int digit=x%10;
rev=(10*rev)+digit;
x=x/10;
        }
if(temp==rev)return true;
else{
    return false;
}

    }
};