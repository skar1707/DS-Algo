/*Given an array of integers arr, return true if and only if it is a valid mountain array.

Recall that arr is a mountain array if and only if:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]*/


bool validMountainArray(vector<int>& arr) {
    
    int len = arr.size();
    if(len<3)
        return false;
    
    int inc = 1;
    bool val = true;
    int first = 0;
    for(int i =0;i<len-1;i++)
    {
        if((arr[i+1]==arr[i]))
        {
            val = false;
            break;
        }
        if(inc)
        {
            if((arr[i+1]<arr[i]))
            {
                if(i==0)
                {
                    val = false;
                    break;
                }
                inc = 0;
            }
        }
        else
        {
            if(arr[i+1]>arr[i])
            {
                val = false;
                break;
            }
        }
    }
    if(inc)
        val = false;
    return val;
    
}

int main()
{
	vector<int> v = {0,3,2,1};

	bool check = validMountainArray(v);
	
	if(check)
		cout<<"validMountainArray\n";
	else
		cout<<"not validMountainArray\n";

	return 0;
}
