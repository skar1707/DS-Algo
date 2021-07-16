#include <iostream>
#include <string>

using namespace std;

/*
 * Complete the 'makeAnagram' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING a
 *  2. STRING b
Delete the following characters from the strings make them anagrams:

Remove d and e from cde to get c.
Remove a and b from abc to get c.
It takes 4 deletions to make both strings anagrams
 */

int makeAnagram(string a, string b) {
    
    int ac[26]={0},bc[26]={0};
    int i;
    for( i=0;i<a.length();i++)
    {
        int diff = int(a[i])-97;
        ac[diff]++;
    }
    for(i =0;i<b.length();i++)
    {
        int diff = int(b[i])-97;
        bc[diff]++;
    }
    int count=0;
    for(i=0;i<26;i++)
    {
       count=count+abs(ac[i]-bc[i]); 
    }
    return count;
}

int main()
{
	string word1 = "cde", word2 = "abc";
	int k =0;

	k = makeAnagram(word1,word2);

	cout<<"Total deletion taken: %d"<<k;

	return 0;
}