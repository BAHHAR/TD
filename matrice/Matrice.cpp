#include<iostream>
#include "Matrice.h"
using namespace std;

Matrice::Matrice()
{
	table = NULL;
	taille_1 = 0;
	taille_2 = 0;
}

Matrice::Matrice(int t1, int t2)
{
	taille_1 = t1;
	taille_2= t2;
	table = new int*[t1];
	for (int i = 0; i < t1; i++) {
		table[i] = new int[t2];
	}
	
}

void Matrice::m_saisir()
{
for (int i = 0; i < taille_1; i++) {
		for (int j = 0; j < taille_2; j++) {
			cout << "l element " << i << " " << j<<" :";
			cin >>table[i][j];
		}
	}
}


Matrice Matrice::operator*(const Matrice&m)
{
	if (taille_2 == m.taille_1) {
		Matrice res(taille_1, m.taille_2);
		int i=0, j=0, i_2=0, j_2=0,i_res=0,j_res=0;
		
		while (i != taille_1) {
			
			j_2 = 0;
			while (j_2 != m.taille_2) {
					int somme = 0;
				while (j != taille_2 || i_2 != m.taille_1) {
					somme += table[i][j] * m.table[i_2][j_2];
					j++;
					i_2++;
					}
				res.table[i_res][j_res] = somme;
				
				j_res++;
				if (j == taille_2)
					j = 0;
				if (i_2 == m.taille_1)
					i_2 = 0;
				j_2++;
				if (j_res == res.taille_2) {
				j_res = 0;
				i_res++;
				}
			}
			i++;
		}
		return res;
	}
	else {
		cout << "La taille des colonnes de la 1ere tableau != la taille des lignes de 2eme tableau" << endl;
		exit(EXIT_FAILURE);
	}
}

Matrice Matrice::operator+(const Matrice&m)
{
	if (taille_1 == m.taille_1 && taille_2 == m.taille_2) {
		Matrice res(taille_1, taille_2);
		for (int i = 0; i < taille_1; i++) {
			for (int j = 0; j < taille_2; j++) {
				res.table[i][j] = table[i][j] + m.table[i][j];
			}
		}
		return res;
	}
	else {
		cout << "les lignes et les colonnes doivent etre egaux!" << endl;
		exit(EXIT_FAILURE);
	}
}

Matrice Matrice::operator-(const Matrice&m)
{

	if (taille_1 == m.taille_1 && taille_2 == m.taille_2) {
		Matrice res(taille_1, taille_2);
		for (int i = 0; i < taille_1; i++) {
			for (int j = 0; j < taille_2; j++) {
				res.table[i][j] = table[i][j] - m.table[i][j];
			}
		}
		return res;
	}
	else {
		cout << "les lignes et les colonnes doivent etre egaux!" << endl;
		exit(EXIT_FAILURE);
	}
}

Matrice Matrice::operator*(const int nbr)
{
	for (int i = 0; i < taille_1; i++) {
		for (int j = 0; j < taille_2; j++) {
			this->table[i][j] *= nbr;
		}
	}
	return *this;
}



bool Matrice::operator==(const Matrice&m)
{
	if (taille_1 == m.taille_1 && taille_2 == m.taille_2) {
		int test = 1;
		for (int i = 0; i < taille_1; i++) {
			for (int j = 0; j < taille_2; j++) {
				if (table[i][j] != m.table[i][j]) {
					test = 0;
					break;
				}
			}
		}
		if (test == 1)
			return true;
		else
			return false;
	}
	else
		return false;
}

Matrice Matrice::m_transpose()
{
	Matrice res(taille_2, taille_1);
	for (int i = 0; i < taille_1; i++) {
		for (int j = 0; j < taille_2; j++) {
			res.table[j][i] = table[i][j];
		}
	}
	return res;
}


void Matrice::m_afficher() const
{
	for (int i = 0; i < taille_1; i++) {
		for (int j = 0; j < taille_2; j++) {
			cout << table[i][j]<<"\t";
		}
		cout << endl;
	}
	cout << endl;
}

Matrice::~Matrice()
{
	
}
