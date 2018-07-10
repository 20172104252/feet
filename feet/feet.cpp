// feet.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class CFeet
{
private:
	int feet;
	int inch;
public:
	CFeet()
	{
		feet = 0;
		inch = 0;
	}
	void setvalue(int F, int I)
	{
		feet = F;
		inch = I;
	}
	void display()
	{
		cout << "feet =  " << feet << "  inch =  " << inch << endl;
	}
	CFeet operator+(CFeet & obj)
	{
		CFeet obj_1;
		int old_feet;
		int old_inch;
		old_feet = obj.feet + feet;
		old_inch = obj.inch + inch;
		old_inch += old_feet * 12;
		obj_1.setvalue(old_inch / 12, old_inch % 12);
		return obj_1;
	}
	CFeet operator-(CFeet & obj)
	{
		CFeet obj_1;
		int old_feet;
		int old_inch;
		old_feet = feet - obj.feet;
		old_inch = inch - obj.inch;
		old_inch += old_feet * 12;
		obj_1.setvalue(old_inch / 12, old_inch % 12);
		return obj_1;
	}
};
int main()
{
	CFeet A, B;
	A.display();
	B.display();
	A.setvalue(1, 2);
	B.setvalue(1, 10);
	CFeet C;
	CFeet D;
	C = A + B;
	D = A - B;
	C.display();
	D.display();
    return 0;
}

