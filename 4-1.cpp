#include<iostream>
using namespace std;

void main()
{
	int n, m ,j=0;
	cout << "input n and m >>";
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < m; j++)
			{
				if (j % 2 == 0)
					cout << "#";
				else
					cout << "*";
			}

		}
		else
		{
			for (int j = 0; j < m; j++)
			{
				if (j % 2 == 0)
					cout << "*";
				else
					cout << "#";
			}
		}
		cout << endl;
	}




	system("pause");

}