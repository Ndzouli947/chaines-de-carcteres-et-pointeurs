#include<iostream>

using namespace std;

void inverese(char*chaine);

int main() {
int i, k = 0;
char chaine[25];
std::cout << "Entrez une chaine de caractere \n";
std::cin >> chaine;

for(i = 0; chaine[i]!= '\0'; i++ ){
    k++;
}
std::cout <<"L'inverse de la chaine est : \n";

for(i = k; i>=0; i--) {
    std::cout << chaine[i];
}
return 0;
}