#include<iostream>
//#define PI 3.14

using namespace std;

int main()
{
	float PI = 3.14;//co the dung double de khai bao bien PI
	int r;
	double S = 0,V = 0;
	cout << "Nhap ban kinh:";cin >> r;
	S = 4*PI*(r*r);
	V = (1.0*4/3)*PI*(r*r*r);
	cout << "Dien tich hinh cau la:"<< S << endl;
	cout << "The tich hinh cau la:" << V;
	return 0;
}
