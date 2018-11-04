#include "string_.h"
using namespace std;
void main()
{
	string_ s1("Hello");
	string_ s2(" world");
	s1.print();
	s2 += s1;
	s2.print();
	cout << "\n";
	system("pause");
}