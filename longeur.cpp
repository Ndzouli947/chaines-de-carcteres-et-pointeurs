#include<iostream>

using namespace std;

int longueur ( const char*chaine) {
    int i = 0;
    while (chaine[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    string chaine;

    std::cout << "entrez une chaine de caractere : ";
    std::cin >> chaine;

    int longueurchaine = longueur(chaine.c_str());

    std::cout << "la chaine contient : " << longueurchaine << "caracters \n";
    return 0;
}