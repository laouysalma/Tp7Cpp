#include <iostream>
#include<string>
using namespace std;

class Contact {
    private :
    string nom;
    string numero;
    string email;

    public :
    Contact (string n){
        nom=n;
        numero ="Inconnu";
        email="Inconnu";

    }
    Contact (string n,string num){
        nom =n;
        numero=num;
        email="Inconnu";

    }
        Contact (string n,string num,string e){
        nom =n;
        numero=num;
        email=e;
        
    }
    void afficher(){
       cout <<"nom : "<<nom<< " , numero : "<<numero<<" , email : "<<email <<endl;
    }
};
int main (){
    Contact c1("Salma");
    Contact c2("Asmae","0645454545");
    Contact c3("hind","0636363636","hind@gmail.com");
    c1.afficher();
    c2.afficher();
    c3.afficher();



}
