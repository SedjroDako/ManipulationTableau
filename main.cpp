#include <iostream>
using namespace std;


/*D�claration du tableau et de sa taille */

int n;
int main()
{

/*Enregistrement du tableau*/

    cout<<" Combien de valeur voulez vous enregistrer"<<endl;
    cin>>n;
    int tab[n];


    int i;

    for(i=0; i<n;i++)
    {
        cout<<"Entrez la valeur numero:"<<i+1<<endl;
        cin>>tab[i];

    }
    /*D�claration de la variable qui contiendra le plus grand �l�ment du tableau*/

    int plusGrand=0;
    int t;


    /*Recherche du plus grand*/

    for(t=0; t<n;t++)
    {
         if (tab[t]>plusGrand)
            plusGrand= tab[t];
    }
    /*Affichage du plus grand*/

cout<<" La plus grande valeur est: "<<plusGrand<<endl;


    return 0;
}
