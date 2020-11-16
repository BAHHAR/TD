#pragma warning(disable :4996)
#include "Compte.h"
#include<iostream>
#include<string.h>
using namespace std;
Compte::Compte()
{
	this->numCompte = 0;
	this->nomProprietaire = NULL;
	this->solde = 0.000;
}

Compte::Compte(int num, const char* nom, float solde)
{
	this->numCompte = num;
	this->solde = solde;
	int taille = strlen(nom);
	this->nomProprietaire = new char[taille];
	strcpy(this->nomProprietaire, nom);
}

bool Compte::m_retirerArgent(float solde_retirer)
{
	if (this->solde > solde_retirer) {
		cout << "Vous pouvez retirer! :";
		return true;
	}
	else {
		cout << "Solde insuffisant!";
		return false;
	}
}

Compte Compte::m_deposerArgent(float deposer_solde)
{
	this->solde += deposer_solde;
	return Compte();
}

void Compte::m_consulterSolde() const
{
	cout << "Votre numero: " <<this->numCompte<< endl;
	cout << "Votre Nom: " << this->nomProprietaire << endl;
	cout << "Votre solde: " << this->solde <<" MAD"<< endl;
}


Compte Compte::m_transfererArgent(float somme_donnee,const Compte&c)
{
	Compte aide;
	int taille = strlen(this->nomProprietaire);
	aide.nomProprietaire = new char[taille];
	strcpy(aide.nomProprietaire, c.nomProprietaire);
	aide.numCompte = c.numCompte;
	this->solde -= somme_donnee;
	aide.solde = c.solde + somme_donnee;
	std::cout << "solde est transfere avec succes!" << std::endl;
	m_consulterSolde();
	return aide;
}

Compte::~Compte()
{
	delete[] nomProprietaire;
}
