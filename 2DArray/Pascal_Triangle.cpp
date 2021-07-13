/*

    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1

*/


#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generate(int numRows) {
    
    vector<vector<int>> ans(numRows);
    
    for(int i =0;i<numRows;i++)
    {
        ans[i].resize(i+1);
        ans[i][0]=1;
        ans[i][i]=1;
        for(int j =1;j<i;j++)
        {
            ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
        }
    }
    return ans;
}

int main()
{
    int numRows = 5;

    vector<vector<int>> ans=generate(numRows);
	
	for(int i =0;i<ans.size();i++)
	{
		//This loop is for printing the space
		for(int k =i;k<ans.size()-1;k++)
		{
			cout<<" ";
		}
		//This Loop for printing the elements
		for(int j=0;j<ans[i].size();j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<"\n";
	}

    return 0;
}
