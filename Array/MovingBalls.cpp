/*Input: boxes = "110"
Output: [1,1,3]
Explanation: The answer for each box is as follows:
1) First box: you will have to move one ball from the second box to the first box in one operation.
2) Second box: you will have to move one ball from the first box to the second box in one operation.
3) Third box: you will have to move one ball from the first box to the third box in two operations, and move one ball from the second box to the third box in one operation.*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> minOperations(string boxes) {
    
    int len = boxes.size();
    vector<int> ans(len,0);
    
    for(int i =0;i<len;i++)
    {
        int val = 0;
        for(int j = 0 ;j<len;j++)
        {
            if(boxes[j]=='1')
            {
                val += abs(i-j);
            }
        }
        ans[i]=val;
    }
    return ans;
}

int main()
{
	string boxes = "110";

	vector<int> ans = sortedSquares(boxes);
	
	for (int i=0; i<ans.size(); i++)
       		cout << v[i] << " ";

	return 0;
}