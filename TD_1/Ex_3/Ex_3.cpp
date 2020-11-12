#include <iostream>
#include"Pile.h"
int main()
{
    Pile a(3);//on donne la taille du tableau
    a.m_empiler(1);
    a.m_empiler(2);
    a.m_empiler(3);
    a.m_afficherPile();
    a.m_depiler(1);
}


