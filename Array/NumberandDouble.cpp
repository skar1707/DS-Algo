/*Given an array arr of integers, check if there exists two integers N and M such that N is the double of M ( i.e. N = 2 * M).

More formally check if there exists two indices i and j such that :

1) i != j
2) 0 <= i, j < arr.length
3) arr[i] == 2 * arr[j]

*/

#include <iostream>
#include <vector>

using namespace std;

bool checkIfExist(vector<int>& arr) {
    
    for(int i =0;i<arr.size();i++)
    {
        
        for(int j =i+1;j<arr.size();j++)
        {
            if((arr[i]==2*arr[j])||(arr[j]==2*arr[i]))
                return true;
        }
    }
    return false;
}


int main()
{
	vector<int> v = {7,1,14,11};

	bool check = checkIfExist(v);
	
	if(check)
		cout<<"Exsists\n";
	else
		cout<<"Does not Exsist\n";

	return 0;
}
