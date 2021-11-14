#include<iostream> 
#include<conio.h>
using namespace std;
int main()
{

    cout << "\n\t\t\t PASCAL'S TRIANGLE \n\n";
    int rows;
    cout << "Enter the number of rows : "; 
        cin >> rows;
    cout << endl;

    for (int i = 0; i < rows; i++)
    {
        int val = 1;
        for (int k = 0; k <= i; k++) {
            cout << val;
            val = val * (i - k) / (k + 1);
        }
        cout << endl;
    }
    cout << endl;
    cin.get();
    return 0;


}