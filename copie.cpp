//Copie du contenu de source dans dest

#include <iostream>

using namespace std;

void copie(char *dest, const char *source) {
    int i = 0;
    while (source[i] != '\0') {
        dest[i] = source[i];
        i+=1;
    }
    
    dest[i] = source[i];
    cout << "\nContenu de source copié dans dest : " << dest <<"\n\n";
}

int main(int argc, char const *argv[]) {
    char dest[] = ""; 
    const char *source = "Hello World !";

    copie(dest, source);
    return 0;
}
