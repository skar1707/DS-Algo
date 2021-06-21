/* Purpose of this program to delete same pair of adjacent letter from string
It means from aaab we can only remove one pair and return ab*/

#include <iostream>
#include <stack>

using namespace std;

int main(){

    string S;
    cin >> S;

    stack<char> ch;

    for(int i=0;i<S.length();i++)
    {
	if(!ch.empty())
	{
	   if(ch.top()==s[i])
	   {
		ch.pop();
	   }   
	   else
	   {
		ch.push(S[i]);
	   }
	}
	else
	{
	   ch.push(S[i]);
	}
     }

     bool emty = ch.empty();
     while(!ch.empty())
     {
	cout<<ch.top();
	ch.pop();
     }
     if(emty)
	cout<<"EMpty String\n";

}
