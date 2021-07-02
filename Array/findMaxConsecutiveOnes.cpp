//To find the maximum number of 1's occurence in a vector

int findMaxConsecutiveOnes(vector<int> nums) {
        
        int num =0;
        int max = 0;
        
        int len = nums.size();
        
        for(int i =0;i<len;i++)
        {
            if(nums[i]==1)
            {
                num++;
                if(num>max)
                    max=num;
            }
            else
            {
                num=0;
            }
        }
        return max;
}

int main()
{
	vector<int> v = { 1, 2, 1, 1, 1, 0, 1 };

	cout<<findMaxConsecutiveOnes(v);

	return 0;
}