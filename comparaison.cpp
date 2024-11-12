#include<iostream>
#include<string.h>

int compare ( const char*chaine1, char*chaine2);

int main (){

    char chaine1[50]; char chaine2[50];

    std::cout <<"chaine1 : ";
    std::cin >> chaine1;
    std::cout << "chaine2 : ";
    std::cin >> chaine2;

    if (strcmp (chaine1, chaine2) == 0) {
        std::cout << chaine1 << "="<< chaine2 << std::endl;
    }else if (strcmp(chaine1,chaine2) < 0) {
        std::cout << chaine1 << "<" << chaine2 << std::endl;
    }else {
        std::cout << chaine1 << ">" << chaine2 << std::endl;
    }
    
    return 0;
}