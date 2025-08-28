#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>


char* convert(char arr[]){
int n = strlen(arr);
char a;
for (int i = 0;i<n/2;i++){
a=arr[i];

arr [i]=arr[n-i-1];

arr[n-i-1]=a;

}
return arr;

}




void affiche(const char *format, ...) {
    char phrase[256];   // buffer pour construire la phrase fin>
    va_list args;
    va_start(args, format);
    vsprintf(phrase, format, args);  // construit la phrase fin>
    va_end(args);

    // Découper en mots et afficher progressivement
    char *mot = strtok(phrase, " ");
    while (mot != NULL) {
        mot = convert(mot);
        printf("%s ", mot);
        fflush(stdout);
        usleep(500000); // 0,3s
        mot = strtok(NULL, " ");
    }
    printf("\n");
}

int main(){
printf("Salut ce programme permet d'inverser les mots d'un texte test>
sleep(1);
affiche("olleh syug tneived hello guys");
sleep(1);
printf("Ps éviter les accents , cédilles et autres\n");

char ph[256];

scanf(" %[^\n]",ph);

affiche(ph);

return 0;
}

