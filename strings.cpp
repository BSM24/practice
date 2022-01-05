#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    char f1,f2;
    getline(cin,a);
    getline(cin,b);
    f1 = a[0];
    f2 = b[0];
    cout << a.length() << " " << b.length() << endl;
    cout << a + b << endl;
    cout << f2 << a.substr(1,a.length() - 1) << " " << f1 << b.substr(1,b.length() - 1) << endl;
    return 0;
}