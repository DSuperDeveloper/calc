#include "pocas.h"
#include <iostream>
using namespace std;

vector<double> pokaz_ras::answer()
{
	return _answer;
}


unsigned pokaz_ras::compute(const vector<double> & v)
{
	double x = v.at(0), l = v.at(1);
	double da, e, d,b, al, A = 2, E = 6;
	if (v.size() > 2)
	{
		return 11;
	}
	
	d = 1 / pow(l, 2);//���������
	b = 1 / l;//���������� ���������
	cout << d << endl;
	cout << b << endl;
	cout << A << endl;
	cout << E << endl;
	
	system("pause");
	_answer.push_back(d);
	_answer.push_back(b);
	_answer.push_back(l);
	_answer.push_back(A);
	_answer.push_back(E);
	return 0;
}




