#include <iostream>

using namespace std;

/*
Exercice 3
J’affiche « Bonjour », et j’attends la réponse de l’utilisateur.
Tant que celui-ci ne répond pas « Bonjour », j’affiche « Mal poli ! »,
et je lui redemande à chaque fois.
*/

int main()
{
    string a="Bonjour";

    cout<<"Bonjour"<< endl;
    cout<<"entrer votre reponse: "<<endl;
    cin>>a;

    while(a!="Bonjour"){
        cout<<"Mal poli !"<<endl;
        cout<<"entrer votre reponse: "<<endl;
        cin.get();
    }
cout<<"Fin de programme"<<endl;
    return 0;
}
