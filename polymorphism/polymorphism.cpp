// polymorphism.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class  Cfeet
{
protected:
	int feet;
	int inches;
public:
	Cfeet();
	void setfeet(int of);
	void setinches(int oi);
	void display();
	int getfeet();
	int getinches();
	~Cfeet();
};
Cfeet::Cfeet()
{
	int feet = 0;
	int inches = 0;
	cout << "����Ĭ�Ϲ��캯��" << endl;
}
void Cfeet::setfeet(int of)
{
	feet = of;
}
void Cfeet::setinches(int oi)
{
	inches = oi % 12;
	feet = feet + oi / 12;
}
void Cfeet::display()
{
	cout << "����feet=" << feet << "Ӣ��" << "inches=" << inches << "Ӣ��" << endl;
}
int Cfeet::getfeet()
{
	return feet;
	cout << feet << endl;
}
int Cfeet::getinches()
{
	return inches;
	cout << inches << endl;
}
Cfeet::~Cfeet()
{
	cout<<"������������"<< "feet=" << feet << "Ӣ��" << "inches=" << inches << "Ӣ��" << endl;
}

class CFeet :public Cfeet
{
public:
	CFeet();
	void display();
	~CFeet();
};
CFeet::CFeet()
{
	cout << "������Ĭ�Ϲ��캯��" << endl;
}
void CFeet::display()
{
	cout << "������feet=" << feet << "Ӣ��" << "inches=" << inches << "Ӣ��" << endl;
}
CFeet::~CFeet()
{
	cout << "��������������" <<"feet="<< feet << "Ӣ��" << "inches=" << inches << "Ӣ��" << endl;

}

int main()
{
	int o, u;
	cin >> o >> u;
	Cfeet online;
	online.setfeet(o);
	online.setinches(u);
	online.display();
	online.getfeet();
	online.getinches();


	CFeet *p;
	p = new CFeet;
	p->setfeet(6);
	p->setinches(11);
	p->display();
	p->Cfeet::display();
	delete p;
    return 0;
}

