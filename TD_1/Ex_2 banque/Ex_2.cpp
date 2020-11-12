#include <iostream>
#include"Compte.h"
using namespace std;
int main()
{
    Compte A(5000, "Ahmed Amine", 8050.175);
    A.m_consulterSolde();

    // ajouter un solde
    
    A.m_deposerArgent(12000);
    A.m_consulterSolde(); //consulter le nouveau soldes

    // transferer un somme donne a un notre compte

    Compte B(500, "Bahhar Zakariya", 667.25);
    B=A.m_transfererArgent(800, B);
    B.m_consulterSolde();

    // retirer un somme;
    cout << B.m_retirerArgent(200);
}
