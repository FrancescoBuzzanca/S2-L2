#include <stdio.h>

int main() {
int numero1, numero2; //definire le variabili per i numeri inseriti
int prodotto; //dichiarazione della variabile per il prodotto

printf("calcoliamo la moltiplicazione tra due nuemri.\n");

//chiediamo all'utente di immettere il primo numero 
printf("inserisci il primo numero:");
scanf("%d",&numero1);

//chiediamo all'utente di immettere il secondo numero 
printf("inserisci il secondo numero");
scanf("%d",&numero2);

//calcoliamo il prodotto dei due numeri
prodotto=numero1*numero2;

//stampiamo il risultato 
printf("il prodotto dei due numeri è: %d\n",prodotto);
}