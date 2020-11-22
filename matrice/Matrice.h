#pragma once
class Matrice
{
public:
	Matrice();
	Matrice(int, int);
	void m_saisir();
	Matrice operator*(const Matrice&);
	Matrice operator+(const Matrice&);
	Matrice operator-(const Matrice&);
	Matrice operator*(const int);
	bool operator==(const Matrice&);
	Matrice m_transpose();
	void m_afficher()const;
	~Matrice();
private:
	int** table, taille_1, taille_2;
};

