/*
 * Deck.h
 *
 *  Created on: Jun 16, 2016
 *      Author: Joshuaa.weg
 */

#ifndef DECK_H_
#define DECK_H_
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
class Deck{
	//attributes
private:

public:
int deck [52];
int deal;

	//constuctors
	Deck();
	Deck(int decks);
	//methods
	void shuffle();
	int hitCard ();


};






#endif /* DECK_H_ */
