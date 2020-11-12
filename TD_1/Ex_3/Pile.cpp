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

void Pile::m_empiler(int valeur)
{
	int i = sommet + 1;
	if (m_pileVide()) {
	table[i] =valeur;
	sommet++;
	}
	else
		cout << "La pile est pleine!"<<endl;
}

void Pile::m_depiler(int valeur)
{
	if (sommet > 0) {
		do {
			cout <<table[sommet];
			sommet--;
			if (table[sommet] == valeur) {
				cout << table[sommet];
				break;
			}
		} while (sommet!=-1);
	}
}

bool Pile::m_pileVide()
{
	if(sommet>=0)
		return true;

}

void Pile::m_afficherPile() const
{
	for (int i = 0; i <taille; i++) {

	cout << table[i];
	}
	cout << endl;
}
