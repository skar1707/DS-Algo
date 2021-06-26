#include <iostream>
#include <string>

using namespace std;

/*Consider a positive whole number "n" with "d" digits. We square 'n' to arrive at a number that is either '2*d' digits long or '(2*d)-1 digits long. Split the string representation of the square into two parts, 'l' and 'r'. The right hand part,  must be  digits long. The left is the remaining substring. Convert those two substrings back to integers, add them and see if you get 'n'.*/

/*Given two positive integers 'p' and 'q', write a program to print the modified Kaprekar numbers in the range between 'p' and 'q', inclusive. If no modified Kaprekar numbers exist in the given range, print INVALID RANGE.*/

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p: the lower limit
 *  2. INTEGER q: the upper limit
 */

void kaprekarNumbers(int p, int q) {
    int count = 0;
    for (int i = p;i <= q;i++)
    {
        int sq = i * i;
        string s = to_string(i);
        int d = s.length();

        int l = sq % d;
        int r = sq / d;

        if ((l + r) == i)
        {
            cout << i << " ";
            count++;
        }
    }
    if (!count)
        cout << "INVALID RANGE\n";
}

int main()
{
    int p = 1;

    int q = 100;

    kaprekarNumbers(p, q);

    return 0;
}