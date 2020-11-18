#pragma once
class Pile
{
public:
	Pile();
	Pile(int);
	void m_empiler(const int&);
	void m_depiler(const int&);
	bool m_pileVide();
	void m_afficherPile()const;
	int m_sommet();
	void m_inverserPile();
	~Pile();
private:
	int sommet,*table,taille;
};

