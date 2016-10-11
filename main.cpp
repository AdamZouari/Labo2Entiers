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
#include <cmath>
#include <string>

using namespace std;

const string alphanum = {"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

int main()
{   
    long long int nbEntierChoisi, quotient, quotienIntermediaire;
    int base, reste;
    string resultat;
    
    cout << "Entrez un nombre entier : ";
    cin >> nbEntierChoisi;
    
    quotienIntermediaire = nbEntierChoisi;
    
    cout << endl << "Entrez une base : ";
    cin >> base;
  
    do
    {
      
    quotient = quotienIntermediaire / base;
    reste = quotienIntermediaire % base;
    quotienIntermediaire = quotient;
    resultat = alphanum[reste] + resultat;
    
    }while(quotient);
    
    cout << endl << nbEntierChoisi << " en base " << base << " s'ecrit " << resultat << endl;

   return 0;
}