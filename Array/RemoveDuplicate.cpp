
/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. */

int removeDuplicates(vector<int>& nums) {
    
    int len = nums.size();
    
    if(len<2)
        return len;
    int i =0;
    int k =1;
    for(;k<len;k++)
    {
        if(nums[i]!=nums[k])
        {
            i++;
            nums[i]=nums[k];
        }
    }
    return i+1;
}

int main()
{
	vector<int> v = {1,0,2,3,0,4,5,0};

	int newSize=removeElement(v);
	
	for (int i=0; i<newSize; i++)
       		cout << v[i] << " ";

	return 0;
}