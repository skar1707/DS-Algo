//Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

vector<int> sortedSquares(vector<int>& nums) {
    
    int len =nums.size();
    vector<int> v(len);
    
    int left =0,right =len-1;
    for(int i =len-1;i>=0;i--)
    {
        if(abs(nums[right])>abs(nums[left]))
           {
               v[i]=nums[right]*nums[right];
               right--;
           }
           else
           {
               v[i]=nums[left]*nums[left];
               left++;
           }
    }
    return v;
}

int main()
{
	vector<int> v = {-7,-3,2,3,11};

	sortedSquares(v);
	
	for (int i=0; i<v.size(); i++)
       		cout << v[i] << " ";

	return 0;
}