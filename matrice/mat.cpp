#include<iostream>
#include"Matrice.h"
using namespace std;


int main() {
	int li, co;
	cout << "nombre de ligne: ";cin >> li;
	cout << "nombre des colognes: "; cin >> co;
	Matrice a(li,co);
	a.m_saisir();
	a.m_afficher();
	
	cout << "nombre de ligne: "; cin >> li;
	cout << "nombre des colognes: "; cin >> co;
	Matrice b(li,co);
	b.m_saisir();
	b.m_afficher();

	if (a == b)
		cout << "a==b" << endl;
	else
		cout << "a<>b" << endl;
	// multiplication
	cout << "multiplication" << endl;
	Matrice res = a* b;
	res.m_afficher();
	//addition
	cout << "addition" << endl;
	res = a + b;
	res.m_afficher();
	// soustraction
	cout << "soustraction" << endl;
	res = a - b;
	res.m_afficher();
	//multiplier par un nombre
	cout << "multiplication par un nombre" << endl;
	a = a * 2;
	a.m_afficher();
	//transposer
	cout << "transposer" << endl;
	b = b.m_transpose();
	b.m_afficher();
}