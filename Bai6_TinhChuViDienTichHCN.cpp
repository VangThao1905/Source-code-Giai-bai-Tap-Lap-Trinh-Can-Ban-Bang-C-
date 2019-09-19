#include<iostream>

using namespace std;

int main()
{
	int a,b,P = 0,S = 0;
	cout << "Nhap a:"; cin >> a;
	cout << "Nhap b:"; cin >> b;
	//P = (a+b)x2
	//S = axb
	P = (a+b)*2;
	S = a*b;
	cout << "Chu vi HCN la:" << P << endl;
	cout << "Dien tich HCN la:" << S;
	return 0;
}
