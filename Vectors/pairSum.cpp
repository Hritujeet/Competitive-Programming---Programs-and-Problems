#include <iostream>
#include <vector>

using namespace std;

vector<int> brute_force(vector<int> nums, int target, int n)
{
    vector<int> answer;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                answer.push_back(nums[i]);
                answer.push_back(nums[j]);
            }
        }
    }
    return answer;
}

vector<int> solve(vector<int> nums, int target, int n) {
    vector<int> ans;
    int i = 0, j = n-1;

    while (i < j)
    {
        int sum = nums[i] + nums[j];

        if (sum > target)
        {
            j--;
        }
        else if (sum < target) {
            i++;
        }
        else {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            break;
        }
        
    }
    return ans;
}

int main()
{
    vector<int> myVec = {2, 7, 11, 15};
    int n = myVec.size();

    vector<int> bs_ans = brute_force(myVec, 9, n);
    cout << bs_ans[0] << " " << bs_ans[1] << endl;

    vector<int> oy_ans = solve(myVec, 9, n);
    cout << oy_ans[0] << " " << oy_ans[1] << endl;
    return 0;
}