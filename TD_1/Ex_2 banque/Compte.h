#pragma once
class Compte
{
public:
	Compte();
	Compte(int, const char*, float);
	bool m_retirerArgent(float);
	Compte m_deposerArgent(float);
	void m_consulterSolde() const;
	Compte m_transfererArgent(float,const Compte&);
	~Compte();
private:
	int numCompte;
	char* nomProprietaire;
	float solde;
};

