class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (vector<int>::iterator i = nums.begin(); i != nums.end(); i++)
        {
            for (vector<int>::iterator j = i + 1, j != nums.end(); j++)
            {
                cout << *j << endl;
            }
        }
    }
};