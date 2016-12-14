/*
Deck.cpp
Jun 16, 2016
Joshuaa.weg
*/
#include "Deck.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
 Deck ::Deck (){
	 for (int i = 0; i < 52; i++) deck[i]= i;
	 deal = -1;
 };
 /*Deck :: Deck (int decks){
	 deck = new int [52*decks];
	 deal = -1;
 };*/
 void Deck :: shuffle() {
	 int compare [52] = {-1};
	 int i = 0;
	 for (int j = 0; j < 52; j++) compare [j] = deck [j];
	 	srand(time(NULL));
	 	for( i = 0; i<52; i++){
	 		int plc = rand()%52;
	 		while (compare [plc] == -1)plc = rand()%52;
	 		this->deck [i] = compare [plc];
	 		compare[plc] = -1;
	 	}
 }
 int Deck :: hitCard (){
	 this->deal++;
	 return this->deck[this->deal];
 }



