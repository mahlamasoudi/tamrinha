#include <iostream>
using namespace std;

int main() {

    int a, b, n1, n2, temp, kmm;
    cout << "adad aval >> ";
    cin >> a;
    cout << "adad dovom >> ";
    cin >> b;
    n1 = a;
    n2 = b;

    while (true) {

        if (b == 0) break;

        temp = a % b;
        a = b;
        b = temp;
    }

    kmm = (n1 * n2) / a;
    cout << "kmm >> " << kmm;

    return 0;
}