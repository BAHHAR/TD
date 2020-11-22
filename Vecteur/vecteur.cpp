#include<iostream>
#include"Vecteur3D.h"
using namespace std;

int main() {
	Vecteur3D vect(1, 2, 8);
	Vecteur3D A(1, 2, 8);
	A.m_afficher();
	Vecteur3D B(1, 5, 6);
	B.m_afficher();
	if (A == B)
		cout << "A = B" << endl;
	else
		cout << "A != B" << endl;

	cout << "adiition" << endl;
	Vecteur3D res = A + B;
	res.m_afficher();

	cout << "soustraction" << endl;
	res = A - B;
	 res.m_afficher();

	 cout << "multuplication" << endl;
	res = A * B;
	 res.m_afficher();

	 cout << "soustraction -=" << endl;
	A -= B;
	 A.m_afficher();

	 cout << "adiition+=" << endl;
	A += B;
	 A.m_afficher();
	
	 cout << "translation" << endl;
	 A.m_translation(5);
	 A.m_afficher();
	return 0;
}