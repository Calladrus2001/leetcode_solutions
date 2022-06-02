#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        int num = x;
        int bar = 0;
        int rem;
        while (num > 0)
        {
            rem = num % 10;
            bar = bar * 10 + rem;
            num = num / 10;
        }
        if (x == bar)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Solution s1 = Solution();
    int x = 10;
    bool ans = s1.isPalindrome(x);
    cout << ans << endl;
}