// polymorphism.cpp : 定义控制台应用程序的入口点。
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
	cout << "基类默认构造函数" << endl;
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
	cout << "基类feet=" << feet << "英尺" << "inches=" << inches << "英寸" << endl;
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
	cout<<"基类析构函数"<< "feet=" << feet << "英尺" << "inches=" << inches << "英寸" << endl;
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
	cout << "派生类默认构造函数" << endl;
}
void CFeet::display()
{
	cout << "派生类feet=" << feet << "英尺" << "inches=" << inches << "英寸" << endl;
}
CFeet::~CFeet()
{
	cout << "派生来析构函数" <<"feet="<< feet << "英尺" << "inches=" << inches << "英寸" << endl;

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

