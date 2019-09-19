#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int a;
	cout << "Nhap a:";
	cin >> a;
	//Cach 1:
	/*cout << "a^2 = " << a*a << endl;
	cout << "a^3 = " << a*a*a << endl;
	cout << "a^4 = " << a*a*a*a;*/
	
	//Cach 2:
	cout << "a^2 = " << pow(a,2) << endl;//pow(x,y) = > x^y
	cout << "a^3 = " << pow(a,3) << endl;
	cout << "a^4 = " << pow(a,4) << endl;
	return 0;
}
