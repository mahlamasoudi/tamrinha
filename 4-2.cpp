#include<iostream>
using namespace std;

void main() {

	int adad,j=1,sw=0;
	long int fact=1;
	cout << "adad ra vared konid >> ";
	cin >> adad;

	do
	{
		fact = fact * j;
		if (fact == adad)
		{
			sw = 1;
			cout << "yes" << endl;
			break;
		}
		j++;
	} while (adad > fact && sw == 0);

	if (sw == 0)
		cout << "no"<<endl;



	system("pause");
}