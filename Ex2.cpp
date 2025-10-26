#include <iostream>
#include <list>
#include <string>
using namespace std;

class Facture {
private:
    struct Article {
        string nom;
        double prix;
        int quantite;
        double tva;
    };

    list<Article> articles;

public:
    void ajouterArticle(string nom, double prix) {
        Article a;
        a.nom = nom;
        a.prix = prix;
        a.quantite = 1;
        a.tva = 0;
        articles.push_back(a);
    }

    void ajouterArticle(string nom, double prix, int quantite) {
        Article a;
        a.nom = nom;
        a.prix = prix;
        a.quantite = quantite;
        a.tva = 0;
        articles.push_back(a);
    }

    void ajouterArticle(string nom, double prix, int quantite, double tva) {
        Article a;
        a.nom = nom;
        a.prix = prix;
        a.quantite = quantite;
        a.tva = tva;
        articles.push_back(a);
    }

    void afficherTotal() {
        double total = 0;
        cout <<"\"       Facture       \" "<< endl;

        for (Article a : articles) {
            double totalArticle = a.prix * a.quantite;
            totalArticle += totalArticle * a.tva / 100;
            cout << a.nom << " : " << totalArticle << " DH" << endl;
            total += totalArticle;
        }

        cout << "Total : " << total << " DH" << endl;
    }
};

int main() {
    Facture f;

    f.ajouterArticle("Table", 500);
    f.ajouterArticle("Chaise", 120, 3);
    f.ajouterArticle("bureau", 1000, 2, 20);

    f.afficherTotal();

    return 0;
}
