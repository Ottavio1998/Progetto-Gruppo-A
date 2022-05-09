#include <stdlib.h>
#include <fstream>
#include <cstring>
#include "libreria.h"

using namespace std;

void caricaGiocatoriSquadra(TElencoGiocatori elenco, int & dim){
    
    // NOME COGNOME ETA' RUOLO NUMERO INGAGGIO
    
    ifstream f;
    int i;
    dim=0;
    cin.ignore();
    char nomefile[LENMAX];
    cout << "Inserire il nome del file testo da aprire: "<< endl;
        cin.getline(nomefile,LENMAX);
        f.open(nomefile);
        if(f.fail()) cout<<"ERRORE"<<endl;
        i=0;
     while(f>>elenco[i].nome){
        f>>elenco[i].cognome;
        f>>elenco[i].eta;
        f>>elenco[i].ruolo;
        f>>elenco[i].numero;
        f>>elenco[i].ingaggio;
        i++;
    }
    
    dim=i;

    f.close();
};

void stampaGiocatoriSquadra(TElencoGiocatori elenco, int dim){
	
	int i;
	for(i=0;i<dim;i++)
	cout<<elenco[i].nome <<" "<<elenco[i].cognome<<"  "<<elenco[i].eta<<" Anni  "<<elenco[i].ruolo<<"  Numero di maglia "<<elenco[i].numero<<"  Stipendio "<<elenco[i].ingaggio<<" milioni euro/anno "<< endl;
};

void swap(TGiocatoreSquadra &a,TGiocatoreSquadra &b){
	TGiocatoreSquadra temp;
	
	temp=a;
	a=b;
	b=temp;
};

bool bubblesort(TElencoGiocatori elenco, int dim){
	int i,j;
	
	for(i=0;i<dim;i++){
		for(j=0;j<dim-1;j++){
			if (strcmp(elenco[j].cognome,elenco[j+1].cognome)>0){
				swap(elenco[j],elenco[j+1]);			
			}			
		}
	}
	return true;
};

bool selectionsort(TElencoGiocatori elenco, int dim){
	int i,j,posmin;
	TGiocatoreSquadra temp;
	
	for(i=0;i<dim-1;i++)
	{
		posmin=i;
		for(j=i+1;j<dim;j++)
		
		 if (strcmp(elenco[j].cognome,elenco[posmin].cognome)<0)
		 		posmin=j;
		 		
		 		//in alternativa potremmo utilizzare 
				//temp=elenco[i];
		 		//elenco[i]=elenco[posmin];
		 		//elenco[posmin]=temp;
               
			   swap(elenco[i],elenco[posmin]);	
	}
	return true;
};

void ricercasequenziale(TElencoGiocatori elenco, int dim){
	bool cercato = false;
	int i;
	char cerca[LENMAX];
	
	cout << "inserisci il cognome da cercare"<<endl;
	cin.ignore();
	cin.getline(cerca,LENMAX);
	
	if (strcmp(elenco[11].cognome,cerca)==0)
	cout<<endl;
    cout<<"MARADONA E' IL PIU' GRANDE DI TUTTI"<<endl;
    cout<<"FACEVA CON LE ARANCE QUELLO CHE PER NOI "<<endl;
    cout<<"ERA IMPOSSIBILE COL PALLONE..."<<endl;
    cout<<endl;
    cout<<"FRANCO BARESI"<<endl;
    cout<<endl;
	
	i=0;
	
	do{
		
		if(strcmp(cerca,elenco[i].cognome)==0){
		
		cout<<elenco[i].nome <<" "<<elenco[i].cognome<<"  "<<elenco[i].eta<<" Anni  "<<elenco[i].ruolo<<"  Numero di maglia "<<elenco[i].numero<<"  Stipendio "<<elenco[i].ingaggio<<" milioni euro/anno "<< endl;
	cercato = true;
	}
	i++;
	
	}while(i<dim && cercato == false);
	
	if(cercato==false)
	
		cout<< "giocatore non trovato" << endl;
};

void ricercabinaria(TElencoGiocatori elenco, int dim){
	int posmin,posmax,posr;
	int pos=-1;
	bool trovato=false;
	char cerca[LENMAX];
	
	cout << "inserisci il cognome da cercare"<<endl;
	
	cin.ignore();
	cin.getline(cerca,LENMAX);
	
	posmin=0;
	posmax=dim-1;
	
 	if (strcmp(elenco[11].cognome,cerca)==0)
	cout<<endl;
    cout<<"MARADONA E' IL PIU' GRANDE DI TUTTI"<<endl;
    cout<<"FACEVA CON LE ARANCE QUELLO CHE PER NOI "<<endl;
    cout<<"ERA IMPOSSIBILE COL PALLONE..."<<endl;
    cout<<endl;
    cout<<"FRANCO BARESI"<<endl;
    cout<<endl;
   
	while(trovato==false && posmin<=posmax){
		posr=(posmax+posmin)/2;
		if (strcmp(elenco[posr].cognome,cerca)==0)
		{pos=posr;
		trovato=true;
		cout<<elenco[pos].nome <<" "<<elenco[pos].cognome<<"  "<<elenco[pos].eta<<" Anni  "<<elenco[pos].ruolo<<"  Numero di maglia "<<elenco[pos].numero<<"  Stipendio "<<elenco[pos].ingaggio<<" milioni euro/anno "<< endl;
		}
		else if (strcmp(elenco[posr].cognome,cerca)>0)
		posmax=posr-1;
		else 
		posmin=posr+1;	
		
	}
   

}

