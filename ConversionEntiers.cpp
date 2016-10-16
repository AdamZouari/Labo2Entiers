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

using namespace std;
// Constante utilisée pour les bases > 10
const string alphanum = {"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

int main()
{   
    long long int nbEntierChoisi, quotient, quotientIntermediaire;
    int base, reste, negatif = 0;
    string resultat;
    // Saisie utilisateur
    cout << "Entrez un nombre entier : ";
    cin >> nbEntierChoisi;
    // Nécessaire pour les nombres négatifs
    if(nbEntierChoisi < 0)
    {
        nbEntierChoisi = abs(nbEntierChoisi);
        negatif = 1;
    }
    
    quotientIntermediaire = nbEntierChoisi;
    
    cout << endl << "Entrez une base (de 2 a 36): ";
    cin >> base;
    // Calcul de la partie entière
    do
    {
    quotient = quotientIntermediaire / base;
    reste = quotientIntermediaire % base;
    quotientIntermediaire = quotient;
    resultat = alphanum[reste] + resultat; 
    }while(quotient);
    
    // Affichage du résultat
    cout << endl << (negatif? "-" :"") << nbEntierChoisi << " en base " 
         << base << " s'ecrit " << (negatif? "-" :"") << resultat << endl;
    
   return 0;
}
