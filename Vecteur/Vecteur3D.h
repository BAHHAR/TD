#pragma once
class Vecteur3D
{
public:
	Vecteur3D();
	Vecteur3D(double, double,double);
	bool operator==(const Vecteur3D&)const;
	Vecteur3D operator+(const Vecteur3D&);
	Vecteur3D operator+=(const Vecteur3D&);
	Vecteur3D operator-(const Vecteur3D&);
	Vecteur3D operator-=(const Vecteur3D&);
	Vecteur3D operator*(const Vecteur3D&);
	void m_translation(double);
	void m_afficher() const ;
	~Vecteur3D();
private:
	double x,y,z;
};

