/*{1,1,2,2,2,7,8}
i/p=1; o/p=0,1;

i/p=2; o/p=2,4;*/

#include <iostream.h>
using namespace std;

int main()
{
	int arr[] = {1,1,2,2,2,7,8};
	int n = sizeof(arr) / sizeof(arr[0]);
	int ip;//Input
	cin>>ip;

	int Initial=-1,last=-1;
	int flag=0;

	for(int i=0;i<10;i++)
	{
		if(arr[i]==ip && !flag)
		{	
			flag=1;
			Initial=i;
			last=i;
		}
		else if(arr[i]==ip)
		{
			last=i;
		}
	}

	if(Initial<0)
	{
		cout<<"no elememt for the input present";
	}
	else
	{
		cout<<"The Range is: ";
		cout<<Initial<<" "<<Final;
	}
}