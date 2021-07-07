/*Given a fixed length array arr of integers, duplicate each occurrence of zero, shifting the remaining elements to the right.

Note that elements beyond the length of the original array are not written.

Do the above modifications to the input array in place, do not return anything from your function.*/

#include <iostream>
#include <vector>

using namespace std;

void duplicateZeros(vector<int>& arr) {
    
    int len = arr.size();
    vector<int> v;
    int j =0;
    for(int i =0;i<len;i++,j++)
    {
        v.push_back(arr[j]);
        if(arr[i]==0)
        {
            v.push_back(0);
        }
    }
    
    for(int k =0;k<len;k++)
        arr[k] = v[k];
}

int main()
{
	vector<int> v = {1,0,2,3,0,4,5,0};

	duplicateZeros(v);
	
	for (int i=0; i<v.size(); i++)
       		cout << v[i] << " ";

	return 0;
}
