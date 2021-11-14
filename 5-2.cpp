#include<iostream>
using namespace std;

int main()
{
	int m, n;
	cout << "input n and m >> ";
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			cout << i * j << "\t";
		cout << "\n";
	}
	system("pause");
	return 0;
}