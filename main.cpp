#include <iostream>

using namespace std;

/*
Exercice 3
J�affiche ��Bonjour��, et j�attends la r�ponse de l�utilisateur.
Tant que celui-ci ne r�pond pas ��Bonjour��, j�affiche ��Mal poli�!��,
et je lui redemande � chaque fois.
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
