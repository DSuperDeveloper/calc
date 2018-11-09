#include "menu.h"
#include "iostream"
#include "clocale"
#include "string"
#include "vector"
#include "cstdlib"

using namespace std;

double input() {
	string str;
	while (true) {
		bool point = false;
		getline(cin, str);
		for (int i = 0; i < str.size(); i++) {
			if (!isdigit(str[i]))
				if(str[i]!='.')
					point = true;
		}
		if (point == true) continue;
		else return atof(str.c_str());
	}
}

vector<double> menu::start() {
	vector<double> data;
	double templ;
	int var;
	setlocale(LC_ALL, "rus");
	cout << "0 - �����\n1 - ���������� ����������\n2 - ���������� ����������\n3 - ���������� ������������\n4 - ���������� ����������� �������� ��������\n";
	cout << "5 - ���������� ����������� �������� ��������\n6 - ��� - �������� ��������������\n7 - ������������� ������������� - �������� ��������������\n";
	cout << "8 - ������� ������������� �������� - �������� ��������������\n9 - ��� - �������� ��������������\n10 - ��� - ����������� ��������� � �������� ��������\n";
	cout << "11 - ������������� �������������\n12 - ����������� �������������\n13 - ���������� �������������\n14 - ���������� ������������� �������� ���������\n";
	var = input();
	data.push_back(var);
	switch(var){
	case 0: exit(0);
	case 1: cout << "m: "; data.push_back(input()); cout << "\nn: "; data.push_back(input()); break;
	case 2: cout << "m: "; data.push_back(input()); cout << "\nn: "; data.push_back(input()); break;
	case 3: cout << "n: "; data.push_back(input()); break;
	case 4: cout << "n: "; data.push_back(input()); cout << "\nm: "; data.push_back(input()); cout << "\np: "; data.push_back(input()); cout << "\nq: "; data.push_back(input()); break;
	case 5: cout << "m: "; data.push_back(input()); cout << "\nn: "; data.push_back(input()); break;
	case 6: cout << "������� ����������� ������: "; cin >> templ; for (int i = 0; i < templ; i++) { cout << "x" << i; data.push_back(input()); cout << "p" << i; data.push_back(input()); } break;
	case 7: cout << "n: "; data.push_back(input()); cout << "\np: "; data.push_back(input()); cout << "\nq: "; data.push_back(input()); break;
	case 8: cout << "n: "; data.push_back(input()); cout << "\np: "; break;
	}
	return data;
}

