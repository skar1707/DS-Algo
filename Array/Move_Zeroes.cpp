/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.*/

/* Example: 
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0] */

#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    
    int i = 0 , j = 0;
    
    int len = nums.size();
    while(j<len)
    {
        if(nums[j]!=0)
        {
            swap(nums[i],nums[j]);
            i++;
            j++;
        }
        else
            j++;
    }
    
}

int main()
{
	vector<int> v = {1,0,2,3,0,4,5,0};

	moveZeroes(v);
	
	for (int i=0; i<v.size(); i++)
       		cout << v[i] << " ";

	return 0;
}