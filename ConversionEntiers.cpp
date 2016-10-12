/*
 -----------------------------------------------------------------------------------
 Laboratoire : Laboratoire2.1 - Convertisseur avec les entiers
 Fichier     : main.cpp
 Auteur(s)   : Sébastien Saez et Adam Zouari
 Date        : 10 octobre 2016

 But         : Le but de ce laboratoire est de mettre en oeuvre un programme 
 *             permettant d'afficher des nombres entiers dans la base 
 *             de notre choix (entre 2 et 36)

 Remarque(s) : Cette version fonctionne uniquement avec des entiers

 Compilateur : g++ (GCC) 6.2.1 
 -----------------------------------------------------------------------------------
 */
#include <iostream>
#include <cstdlib>

using namespace std;

const string alphanum = {"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

int main()
{   
    long long int nbEntierChoisi, quotient, quotientIntermediaire;
    int base, reste;
    string resultat;
    
    cout << "Entrez un nombre entier" << endl;
    cin >> nbEntierChoisi;
    
    quotientIntermediaire = nbEntierChoisi;
    
    cout << "Entrez une base" << endl;
    cin >> base;
  
    do
    {

    quotient = quotientIntermediaire / base;
    reste = quotientIntermediaire % base;
    quotientIntermediaire = quotient;
    resultat = alphanum[reste] + resultat;
    
    }while(quotient);
    
    cout << nbEntierChoisi << " en base " 
         << base << " s'ecrit " << resultat << endl;

   return EXIT_SUCCESS;
}