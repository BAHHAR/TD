#include <iostream>
#include"Pile.h"
int main()
{
    Pile a(3);//on donne la taille du tableau
    a.m_empiler(1);
    a.m_empiler(2);
    a.m_empiler(3);
    a.m_afficherPile();
    a.m_depiler(2);//depiler la valeur
    std::cout << std::endl;
    std::cout <<"La valeur du sommet: " <<p1.m_sommet() << std::endl; 
    p1.m_inverserPile();
    p1.m_afficherPile();
}


