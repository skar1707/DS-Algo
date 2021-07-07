
//Given an integer array nums and an integer val, remove all occurrences of val in nums in-place.

#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
        
        int k =0;
        
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }

int main()
{
	vector<int> v = {1,0,2,3,0,4,5,0};

	int newSize=removeElement(v,0);
	
	for (int i=0; i<newSize; i++)
       		cout << v[i] << " ";

	return 0;
}
