#include<iostream>
using namespace std;
#define max(a,b) a>b?a:b
int x = 0, y = 0;
int maxSubArray(int a[], int n)
{
	int result = 0, f = 0;
	
	for (int i = 0; i < n; i++)
	{
		f = max(f + a[i], a[i]);
		if (f == a[i])
			x = i;
		result = max(result, f);
		if (result == f)
			y = i;
	}
	return result;
}
int main()
{
	int a[] = { -2, 1, -3, 1, 2, 4, -1, 5, -3, 1 ,2};
	
	cout << maxSubArray(a, 11) << endl;
	for (int i = x; i <= y; i++)
		cout << a[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
