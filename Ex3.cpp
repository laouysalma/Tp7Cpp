#include <iostream>
#include <string>
using namespace std;

class CompteBancaire {
private:
    double solde;
    string codeSecret;

public:
    CompteBancaire() {
        solde = 0;
        codeSecret = "4002";
    }

    CompteBancaire(double montant) {
        solde = montant;
        codeSecret = "4002";
    }

    void afficherSolde() {
        cout << "Solde actuel : " << solde << " DH" << endl;
    }

    void retrait(double montant) {
        if (montant <= solde) {
            solde -= montant;
            cout << "Retrait de " << montant << " DH effectué." << endl;
        } else {
            cout << "Solde insuffisant." << endl;
        }
    }

    void retrait(double montant, string code) {
        if (code == codeSecret) {
            if (montant <= solde) {
                solde -= montant;
                cout << "Retrait de " << montant << " DH effectué avec code." << endl;
            } else {
                cout << "Solde insuffisant." << endl;
            }
        } else {
            cout << "Code incorrect." << endl;
        }
    }
};

int main() {
    CompteBancaire c1;
    CompteBancaire c2(1000);

    c1.afficherSolde();
    c1.retrait(50);
    c1.afficherSolde();

    c2.afficherSolde();
    c2.retrait(200, "4002");
    c2.afficherSolde();

    c2.retrait(500, "0000");
    c2.afficherSolde();

    return 0;
}
