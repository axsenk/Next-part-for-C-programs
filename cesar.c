#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>



void cryptage(){
char arr[256];
scanf("%s",arr);
int n = strlen(arr);
int ascii;
int position;
for (int i = 0;i<n;i++){
ascii = arr[i];
if(ascii>=97 && ascii<=122){
position = ascii -97;
position = (position+3)%26;
ascii = 97 + position;
printf("%c",ascii);

}
else if(ascii>=65 && ascii<=90){
position = ascii-65;
position= (position+3)%26;
ascii = 65 + position;
printf("%c",ascii);
}
}
printf("\n");
printf("Voulez vous crypter un autre mot? [y/n]\n");
char ch;
scanf(" %c",&ch);
if(ch=='y' || ch=='Y'){
printf("Entrer le mot: \n");
cryptage();
}
else {
printf("Bonne suite\n");
}
}

void decryptage(){
char arr[256];
scanf("%s",arr);
int n = strlen(arr);
int ascii;
int position;
for (int i = 0;i<n;i++){
ascii = arr[i];
if(ascii>=97 && ascii<=122){
position = ascii -97;
position = (position-3+26)%26;
ascii = 97 + position;
printf("%c",ascii);

}
else if(ascii>=65 && ascii<=90){
position = ascii-65;
position= (position-3+26)%26;
ascii = 65 + position;
printf("%c",ascii);
}
}
printf("\n");
printf("Voulez vous decrypter un autre mot? [y/n]\n");
char ch;
scanf(" %c",&ch);
if(ch=='y' || ch=='Y'){
printf("Entrer le mot: \n");
decryptage();
}
else {
printf("Bonne suite\n");
}
}

int main(){

printf("Ce programme permet de chiffrer ou déchiffrer un mot par un décalage des lettres alphabétiques.");
sleep(1);
printf("Voulez vous crypter ou decrypter un mot? [C/D]");
char resu;
scanf(" %c",&resu);
if (resu=='C' || resu=='c'){
printf("Veuillez saisir le mot à crypter: ");
cryptage();

}
else if(resu=='D'|| resu=='d'){
printf("Veuillez saisir le mot à decrypter: ");
decryptage();
}

return 0;
}

