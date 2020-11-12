#pragma once
class Temps
{
public:
	Temps();
	Temps(int, int, int);
	void  m_heureAnglaise()const;
	void m_heureFrancais()const;
	bool inferieur(const Temps&);
	void compare(int ,int ,int );
	~Temps();
private:
	int heure, minute, seconde;
};

