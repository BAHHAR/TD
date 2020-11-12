#include<iostream>
#include "Temps.h"
#include<cmath>
using namespace std;
Temps::Temps()
{
	this->heure = 0;
	this->minute = 0;
	this->seconde = 0;
}

Temps::Temps(int h, int m, int s)
{
	this->heure = h;
	this->minute = m;
	this->seconde = s;
}

void Temps::m_heureAnglaise() const
{
	if (this->heure > 12) 
		cout << this->heure - 12 << " : " << this->minute << " : " << this->seconde <<" pm"<< endl;
	
	else
		cout << this->heure << " : " << this->minute << " : " << this->seconde <<" am"<< endl;
		
}

void Temps::m_heureFrancais() const
{
	cout << this->heure << " : " << this->minute << " : " << this->seconde << endl;
}

bool Temps::inferieur(const Temps&time)
{
	if (this->seconde < time.seconde && this->minute < time.minute && this->heure < time.heure)
		return true;
	else
		return false;
}

void Temps::compare(int h, int m, int s)
{
	Temps t(h, m, s);
	if (inferieur(t))
		cout << "Inferieur" << endl;
	else
		cout << "Superieur" << endl;
}

Temps::~Temps()
{

}
