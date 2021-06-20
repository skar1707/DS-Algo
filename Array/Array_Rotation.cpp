// C++ program to rotate an array by d elements

#include <iostream.h>
using namespace std;

/*Fuction to get gcd of a and b*/
int gcd(int a, int b)
{
	if (b == 0)
		return a;

	else
		return gcd(b, a % b);
}

/*Function to left rotate arr[] of siz n by d*/
void leftRotate(int arr[], int d, int n)
{
	/* To handle if d >= n */
	d = d % n;
	int g_c_d = gcd(d, n);
	for (int i = 0; i < g_c_d; i++) {
		/* move i-th values of blocks */
		int temp = arr[i];
		int j = i;

		while (1) {
			int k = j + d;
			if (k >= n)
				k = k - n;

			if (k == i)
				break;

			arr[j] = arr[k];
			j = k;
		}
		arr[j] = temp;
	}
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);

	leftRotate(arr, 2, n);

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}
