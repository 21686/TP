#pragma once
#include <iostream>
#define None "none";
using namespace std;
class familyTree
{
public:
	char name;
	char surname;
	char secondName;
	char partner;
	int childrenNumber;
	// ����� �������� ���������� ��� ����������� ����� �����. ���� ����������� ��������� �������
	int dayBirth;
	int monthBirth;
	int yearBirth;
	int Age;
	int dayDeath;
	int monthDeath;
	int yearDeath;
	void GetDate();
	void GetStatus();
	void GetInfo();
	void GetChildrenInfo();
};

