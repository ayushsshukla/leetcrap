class Solution {
public:
    bool isPalindrome(int x)
    {
        if(x >= 0 && x == rev(x)) return true;
        return false;
    }
private:
    long long rev(int x)
    {
        long long rev {};
        while(x > 0)
        {
            rev += x%10;
            x/=10;
            rev *= 10;
        }
        rev /= 10;
        return rev;
    }
};