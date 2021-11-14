#include<iostream>
#include<string>
using namespace std;


void main()
{
	int i = 0, n,tedad=0;
	string str;
	cout << "jomle ra vared konid >> ";
	getline(cin, str);
	n = str.length();
	while (i < n)
	{
		if (str[i] == ' ')
			tedad++;
		i++;
	}


	cout << "tedad kalamat >> " << ++tedad<<endl;

	system("pause");
}