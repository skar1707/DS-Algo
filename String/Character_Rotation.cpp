#include <iostream>
#include <string>

using namespace std;

/*Original alphabet:      abcdefghijklmnopqrstuvwxyz
Alphabet rotated +2:    cdefghijklmnopqrstuvwxyzab*/

string caesarCipher(string s, int k) {
    
    int rot = k%26;
    if(rot)
    {
        for(int i =0;i<s.length();i++)
        {
            int as = s[i];
            if(as>=65 && as<=90)
            {
                as = as + rot;
                if(as>90)
                    as = 64 + (as-90);
            }
            if(as>=97 && as<=122)
            {
                as = as + rot;
                if(as>122)
                    as = 96 + (as-122);
            }
            s[i]=as;
        }
    }
    return s;
}

int main()
{
	string s = "abcdefghijklmnopqrstuvwxyz";
	int k =2;

	string mod = caesarCipher(s,k);

	cout<<"The modified string is: "<<mod;

	return 0;
}