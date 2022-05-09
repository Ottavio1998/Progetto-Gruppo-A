#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cstring>
#include "libreria.h"

using namespace std;

int main()
{   
    int dim,scelta=0,sc;
    int cont = 0, contSelezionati = 0;
    char control = 'n';
    char nomeGiocatore[20];
    TElencoGiocatori elenco ={}, elencoSelezionati = {};
    bool caricato=false;
    bool ordinato=false;
    bool uscita=false;



while(uscita ==false)
{

    do {
    	cout<<"MENU'"<<endl;
    	cout<<"1.Carica Giocatori"<<endl;
    	cout<<"2.Stampa Giocatori"<<endl;
    	cout<<"3.Ordina Giocatori"<<endl;
    	cout<<"4.Ricerca Giocatori"<<endl;
    	cout<<"5.EXIT"<<endl;
    	cout<<"Inserisci la tua scelta..."<<endl;
    	cin>>scelta;
    	
    if (scelta==1)
    {
	caricaGiocatoriSquadra(elenco, dim);
    caricato=true;
	};
	
	
    if (scelta==2 && caricato==true)
	    { cin.ignore();
	    	stampaGiocatoriSquadra(elenco, dim);
		};
		
		
    if (scelta==2 && caricato==false)
	    {
	    	cout<<"I Giocatori non sono stati caricati!"<<endl;
		};
		
		
   if (scelta==3 && caricato==true) 	
   {
   	cout<<"Scegli con quale algoritmo ordinare l'elenco dei giocatori"<<endl;
   	cout<<"1.Bubble Sort"<<endl;
   	cout<<"2.Selection Sort"<<endl;
   	do {
	   cout<<"Inserisci scelta"<<endl;
	   cin>>sc;
    }while (sc<1 && sc>2);
    
   	if (sc==1){
   		ordinato=bubblesort(elenco,dim);
   		cout<<"L'elenco e' stato ordinato"<<endl;
	   };
	   
	if (sc==2) { 
        ordinato=selectionsort(elenco,dim);
   		cout<<"L'elenco e' stato ordinato"<<endl;	}   
   	};
   	
   if (scelta==3 && caricato==false)
	    {
	    	cout<<"I Giocatori non sono stati caricati!"<<endl;
		};
		
		
	if (scelta==4 && caricato==true)
	    {cout<<"Scegli con quale algoritmo ricercare il giocatore nell'elenco'"<<endl;
   	cout<<"1.Ricerca Binaria"<<endl;
   	cout<<"2.Ricerca Sequenziale"<<endl;
   	
   	do {
	   cout<<"Inserisci scelta"<<endl;
	   cin>>sc;
    }while (sc<1 && sc>2);
    
   	if (sc==1 && ordinato==true){
	   ricercabinaria(elenco,dim);	
	   };
	   
	   if (sc==1 && ordinato==false){
   		cout<<"L'elenco non e' ordinato Ricerca Binaria non possibile!"<<endl;
	   };
	   
	if (sc==2) { 
       	ricercasequenziale(elenco,dim);
		   }  ;
		   
		    
		};
		
		
	if (scelta==4 && caricato==false)
	    {
	    	cout<<"I Giocatori non sono stati caricati!"<<endl;
		};	
	
	if (scelta==5)
		uscita=true;	
    
  

} while (scelta<1 && scelta>5);
};
    return 0;
}


