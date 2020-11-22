#include<iostream>
#include "Vecteur3D.h"
using namespace std;
Vecteur3D::Vecteur3D()
{
	x = 0;
	y = 0;
	z = 0;
}

Vecteur3D::Vecteur3D(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

bool Vecteur3D::operator==(const Vecteur3D&v) const
{
	if(x==v.x && y==v.y && z==v.z)
		return true;
	return false;
}

Vecteur3D Vecteur3D::operator+(const Vecteur3D&v)
{
	Vecteur3D res;
	res.x = this->x + v.x;
	res.y = this->y + v.y;
	res.z = this->z + v.z;
	return res;
}

Vecteur3D Vecteur3D::operator+=(const Vecteur3D&v)
{
	this->x = this->x + v.x;
	this->y = this->y + v.y;
	this->z = this->z + v.z;
	return *this;
}

Vecteur3D Vecteur3D::operator-(const Vecteur3D&v)
{
	Vecteur3D res;
	res.x = this->x - v.x;
	res.y = this->y - v.y;
	res.z = this->z - v.z;
	return res;
}

Vecteur3D Vecteur3D::operator-=(const Vecteur3D&v)
{
	this->x = this->x - v.x;
	this->y = this->y - v.y;
	this->z = this->z - v.z;
	return *this;
}

Vecteur3D Vecteur3D::operator*(const Vecteur3D&v)
{
	Vecteur3D res;
	res.x = this->x * v.x;
	res.y = this->y * v.y;
	res.z = this->z * v.z;
	return res;
}

void Vecteur3D::m_translation(double nbr)
{
	x *= nbr;
	y *= nbr;
	z *= nbr;
}




void Vecteur3D::m_afficher() const
{
	cout << "( " <<x<< " ; "<<y<< " ; "  <<z<< " )" << endl;
}




Vecteur3D::~Vecteur3D()
{
}


