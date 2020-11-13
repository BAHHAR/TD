#pragma once
class Pile
{
public:
	Pile();
	Pile(int);
	void m_empiler(int);
	void m_depiler(int);
	bool m_pileVide();
	void m_afficherPile()const;
	~Pile();
private:
	int sommet,*table,taille;
};

