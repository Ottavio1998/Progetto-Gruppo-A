#include <iostream>
#include <fstream>
#include <cstring>

#define LENMAX 20
#define NMAX 100

typedef struct{
    char nome[LENMAX];
    char cognome[LENMAX];
    int eta;
    char ruolo[LENMAX];
    int numero;
    float ingaggio;
} TGiocatoreSquadra;

typedef TGiocatoreSquadra TElencoGiocatori[NMAX];
void caricaGiocatoriSquadra(TElencoGiocatori elenco, int& dim);
void stampaGiocatoriSquadra(TElencoGiocatori elenco, int dim);
void swap(TGiocatoreSquadra &a,TGiocatoreSquadra &b);
bool bubblesort(TElencoGiocatori elenco, int dim);
bool selectionsort(TElencoGiocatori elenco, int dim);
void ricercabinaria(TElencoGiocatori elenco, int dim);
void ricercasequenziale(TElencoGiocatori elenco, int dim);
