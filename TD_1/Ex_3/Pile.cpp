#include "Pile.h"
#include<iostream>
using namespace std;
Pile::Pile()
{
	table = 0;
	sommet = -1;
	taille = 0;
}

Pile::Pile(int taille)
{
	this->taille = taille;
	table = new int[taille];
	sommet = -1;
}

void Pile::m_empiler(const int& valeur)
{
	int i = sommet + 1;
	if (m_pileVide()) {
		table[i] = valeur;
		sommet++;
	}
	else
		cout << "La pile est pleine!" << endl;
}

void Pile::m_depiler(const int& valeur)
{
	if (sommet > 0) {
		do {
			cout << table[sommet];
			sommet--;
			if (table[sommet] == valeur) {
				cout << table[sommet];
				break;
			}
		} while (sommet != -1);
	}
}

bool Pile::m_pileVide()
{
	if (sommet < taille)
		return true;

}

void Pile::m_afficherPile() const
{
	for (int i = 0; i < taille; i++) {

		cout << table[i];
	}
	cout << endl;
}
int Pile::m_sommet()
{
	if (sommet == -1) {
		cout << "La pile est vide! ";
		return 0;
	}else
		return table[sommet];
}
void Pile::m_inverserPile()
{
	int indice = taille-1;
	for (int i = 0; i < taille; i++) {
		int aide =table[i];
		table[i] =table[indice];
		table[indice] = aide;
		indice--;
		if (indice == 0)
			break;
	}
}
Pile::~Pile() {
	delete[] table;
}
