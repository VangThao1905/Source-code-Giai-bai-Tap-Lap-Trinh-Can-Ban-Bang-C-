#include<iostream>

using namespace std;

int main()
{
	int a,b;
	int tong = 0,hieu = 0,tich = 0;
	float thuong = 0;
	
	cout << "Nhap a:"; cin >> a;
	cout << "Nhap b:"; cin >> b;
	tong = a + b;
	hieu = a - b;
	tich = a*b;
	//thuong = (float)a/b;
	thuong = (1.0*a)/b;
	
	cout << "Tong = " << tong << endl;
	cout << "Hieu = " << hieu << endl;
	cout << "Tich = " << tich << endl;
	cout << "Thuong = " << thuong;
	
	return 0;
}
