/*You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
*/

#include <iostream>
#include <string>

using namespace std;

string mergeAlternately(string word1, string word2) {
    
    int len1 = word1.size();
    int len2 = word2.size();
    string res;
    int i =0,j=0,pat=0;
    while(i<len1 && j<len2)
    {
        if(!pat)
        {
            res+=word1[i];
            i++;
            pat =1;
        }
        else
        {
            res+=word2[j];
            j++;
            pat =0;
        }
    }
    while(i<len1)
    {
        res+=word1[i];
        i++;
    }
    while(j<len2)
    {
        res+=word2[j];
        j++;
    }
    return res;
}

int main()
{
	string word1 = "abcd", word2 = "pq";
	int k =2;

	string res = mergeAlternately(word1,word2);

	cout<<"The modified string is: "<<res;

	return 0;
}