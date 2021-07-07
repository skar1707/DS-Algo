//To find the Numbers of elements with Even Number of Digits
/*Input: nums = [555,901,482,1771]
Output: 1 
Explanation: 
Only 1771 contains an even number of digits.*/

#include <iostream>
#include <vector>

using namespace std;

int findNumbers(vector<int>& nums) {
    
    int num =0;
    int len = nums.size();
    for(int i =0;i<len;i++)
    {
        int digit =0;
        while(nums[i])
        {
            digit++;
            nums[i]=nums[i]/10;
        }
        if(digit%2==0)
            num++;
    }
    return num;
}

int main()
{
	vector<int> v = {555,901,482,1771};

	cout<<findMaxConsecutiveOnes(v);

	return 0;
}
