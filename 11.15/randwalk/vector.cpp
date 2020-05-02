//define functions and friend functions for vector.h
//

#include<cmath>
#include"vector.h"  //this head file include <iostream>

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
	//compute degrees in one radian
	const double Rad_to_deg = 45.0 / atan(1.0);//should be 57.2957795130823


	void Vector::set_mag()
	{
		mag = sqrt(x * x + y * y);
	}

	void Vector::set_ang()
	{
		//ang = atan(y / x);
		if (x == 0.0 && y == 0.00)
			ang = 0.0;
		else
			ang = atan2(y, x);
	}

	//set x from polar cordinate
	void Vector::set_x()
	{
		x = mag * cos(ang);
	}
	void Vector::set_y()
	{
		y = mag * sin(ang);
	}

	Vector::Vector()
	{
		x = y = mag = ang = 0.0;
		mode = RECT;
	}

	Vector::Vector(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
			set_ang();
			set_mag();
		}
		else if (form == POL)
		{
			mag = n1;
			ang = n2;
			set_x();
			set_y();
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector() -- ";
			cout << "Vector set 0\n";
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}

	void Vector::reset(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
			set_ang();
			set_mag();
		}
		else if (form == POL)
		{
			mag = n1;
			ang = n2;
			set_x();
			set_y();
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector() -- ";
			cout << "Vector set 0\n";
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}

	Vector::~Vector()
	{	}

	void Vector::rect_mode()
	{
		mode = RECT;
	}

	void Vector::polar_mode()
	{
		mode = POL;
	}

	//operator overloading
	Vector Vector::operator+(const Vector& b)const
	{
		return Vector(x + b.x, y + b.y);
	}

	Vector Vector::operator-(const Vector& b)const
	{
		return Vector(x - b.x, y - b.y);
	}

	Vector Vector::operator-()const
	{
		return Vector(-x, -y);
	}

	Vector Vector::operator*(double n)const
	{
		return Vector(n * x, n * y);
	}

	//friend function
	Vector operator* (double n, const Vector& a)
	{
		return a * n;
	}

	std::ostream& operator<<(std::ostream& os, const Vector& v)
	{
		if (v.mode == Vector::RECT)
			os << "(x,y) = (" << v.x << " , " << v.y << ")";
		else if (v.mode == Vector::POL)
			os << "(mag,ang[rad]) = " << v.mag << " , " << v.ang << ")";
		else
			os << "Vector object mode is invalid";
		return os;
	}
}//end of namespace VECTOR