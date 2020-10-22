#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;
    }

    int revertedNumber = 0;
    while (x > revertedNumber)
    {
        revertedNumber = revertedNumber * 10 + x % 10;
        x /= 10;

        return x == revertedNumber || x = revertedNumber / 10;
    }
};

int main()
{
    Solution sol;

    sol.isPalindrome(10);
}