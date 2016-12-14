//============================================================================
// Name        : Magic.cpp
// Author      : Joshua Weg
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Deck.h"
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
string suit [4]= {"S","H","C","D"};
string value [13]= {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
int setA[27];
int setB[27];
int fill (int card){
	return card;
}
int place (int spNumber){
	spNumber--;
	int numArr1 [3] {0,1,2};
	int numArr2 [3] {0,3,6};
	int numArr3 [3] {0,9,18};
	int arrSum = -1;
	int i = -1;
	int j = 0;
	int k = 0;
	while(arrSum != spNumber){
		if(i < 3) i++;
		else if(j < 3) {j++; i = 0;}
		else{k++; i = 0; j = 0;}
		arrSum = numArr1[i]+numArr2[j]+numArr3[k];
	}
		return arrSum;
}


int main() {
	char p;
	Deck d;
	d.shuffle();
	srand(time(NULL));
	int n = rand()%27;
	n--;
	int numArr1 [3] {0,1,2};
	int numArr2 [3] {0,3,6};
	int numArr3 [3] {0,9,18};
	int arrSum = -1;
	int i = -1;
	int j = 0;
	int k = 0;
	while(arrSum != n){
		if(i < 3) i++;
		else if(j < 3) {j++; i = 0;}
		else{k++; i = 0; j = 0;}
		arrSum = numArr1[i]+numArr2[j]+numArr3[k];
		}
	for(int i = 0; i<27; i++){
		setA[i]= fill(d.hitCard());
	}
	for(int i = 0; i<27; i++){
		if(i%3 == 0)cout << endl << value [setA[i]%13]<<suit[setA[i]/13]<<" ";
		else cout << value [setA[i]%13]<<suit[setA[i]/13]<<" ";
		}
	while(p !='l' &&p !='m' && p != 'r' ){
	    cout << endl;
	    cout << "\nIs your card in the (l)eft, (m)iddle, or (r)ight pile: ";
	    cin >> p;
	   }
	    if(p == 'l' && i == 0){
	    	int m = 0;

	    	for(int l =0 ; l < 9 ; l++){setB[l] = setA[m]; m+=3;}
	    	 m = rand()%2+1;
	    	 int v = m;

	    		    	for(int l =9; l < 18 ; l++){setB[l] = setA[m]; m+=3;}
	    	 m = rand()%2+1;
	         while (v == m) m = rand()%2+1;

	         for(int l =18 ; l < 27 ; l++){setB[l] = setA[m]; m+=3;}
	    }
	    else if(p == 'm' && i == 0){
	    	int m = 1;

	    	for(int l =0 ; l < 9 ; l++){setB[l] = setA[m]; m+=3;}
	    	 m =2;


	    		    	for(int l =9; l < 18 ; l++){setB[l] = setA[m]; m+=3;}
	    	 m = 0;


	         for(int l =18 ; l < 27 ; l++){setB[l] = setA[m]; m+=3;}
	    }
	    else if(p == 'r' && i == 0){
	   	    	int m = 2;

	   	    	for(int l =0 ; l < 9 ; l++){setB[l] = setA[m]; m+=3;}
	   	    	 m =1;


	   	    		    	for(int l =9; l < 18 ; l++){setB[l] = setA[m]; m+=3;}
	   	    	 m = 0;


	   	         for(int l =18 ; l < 27 ; l++){setB[l] = setA[m]; m+=3;}
	   	    }
	    else if(p == 'l' && i == 1){
	   	    	int m = 1;

	   	    	for(int l =0 ; l < 9 ; l++){setB[l] = setA[m]; m+=3;}
	   	    	 m =0;


	   	    		    	for(int l =9; l < 18 ; l++){setB[l] = setA[m]; m+=3;}
	   	    	 m = 2;


	   	         for(int l =18 ; l < 27 ; l++){setB[l] = setA[m]; m+=3;}
	   	    }
	    else if(p == 'm' && i == 1){
	   	    	int m = 0;

	   	    	for(int l =0 ; l < 9 ; l++){setB[l] = setA[m]; m+=3;}
	   	    	 m =1;


	   	    		    	for(int l =9; l < 18 ; l++){setB[l] = setA[m]; m+=3;}
	   	    	 m = 2;


	   	         for(int l =18 ; l < 27 ; l++){setB[l] = setA[m]; m+=3;}
	   	    }
	    else if(p == 'r' && i == 1){
	   	    	int m = 1;

	   	    	for(int l =0 ; l < 9 ; l++){setB[l] = setA[m]; m+=3;}
	   	    	 m =2;


	   	    		    	for(int l =9; l < 18 ; l++){setB[l] = setA[m]; m+=3;}
	   	    	 m = 0;


	   	         for(int l =18 ; l < 27 ; l++){setB[l] = setA[m]; m+=3;}
	   	    }
	    else if(p == 'l' && i == 2){
	   	    	int m = 2;

	   	    	for(int l =0 ; l < 9 ; l++){setB[l] = setA[m]; m+=3;}
	   	    	 m =1;


	   	    		    	for(int l =9; l < 18 ; l++){setB[l] = setA[m]; m+=3;}
	   	    	 m = 0;


	   	         for(int l =18 ; l < 27 ; l++){setB[l] = setA[m]; m+=3;}
	   	    }
	    else if(p == 'm' && i == 2){
	   	    	int m = 0;

	   	    	for(int l =0 ; l < 9 ; l++){setB[l] = setA[m]; m+=3;}
	   	    	 m =2;


	   	    		    	for(int l =9; l < 18 ; l++){setB[l] = setA[m]; m+=3;}
	   	    	 m = 1;


	   	         for(int l =18 ; l < 27 ; l++){setB[l] = setA[m]; m+=3;}
	   	    }
	    else{
	   	    	int m = 1;

	   	    	for(int l =0 ; l < 9 ; l++){setB[l] = setA[m]; m+=3;}
	   	    	 m =0;


	   	    		    	for(int l =9; l < 18 ; l++){setB[l] = setA[m]; m+=3;}
	   	    	 m = 2;


	   	         for(int l =18 ; l < 27 ; l++){setB[l] = setA[m]; m+=3;}
	   	    }
	    for(int i = 0; i<27; i++){
	    		if(i%3 == 0)cout << endl << value [setB[i]%13]<<suit[setB[i]/13]<<" ";
	    		else cout << value [setB[i]%13]<<suit[setB[i]/13]<<" ";
	    		}
	    p = 't';
	    while(p !='l' &&p !='m' && p != 'r' ){
	   	    cout << endl;
	   	    cout << "\nIs your card in the (l)eft, (m)iddle, or (r)ight pile: ";
	   	    cin >> p;
	   	   }
	 if(p == 'l' && j == 0){
	    int m = 0;
	    for(int l =0 ; l < 9 ; l++){setA[l] = setB[m]; m+=3;}
	     m = rand()%2+1;
	     int v = m;
	    for(int l =9; l < 18 ; l++){setA[l] = setB[m]; m+=3;}
	     m = rand()%2+1;
	      while (v == m) m = rand()%2+1;
	      for(int l =18 ; l < 27 ; l++){setA[l] = setB[m]; m+=3;}
	 }
	  else if(p == 'm' && j == 0){
	    	int m = 1;
	    	for(int l =0 ; l < 9 ; l++){setA[l] = setB[m]; m+=3;}
	    	m =2;
	    	for(int l =9; l < 18 ; l++){setA[l] = setB[m]; m+=3;}
	        m = 0;
	        for(int l =18 ; l < 27 ; l++){setA[l] = setB[m]; m+=3;}
	}
	 else if(p == 'r' && j == 0){
	       int m = 2;
      for(int l =0 ; l < 9 ; l++){setA[l] = setB[m]; m+=3;}
	    	 m = 1;
	  for(int l =9; l < 18 ; l++){setA[l] = setB[m]; m+=3;}
	  	  	m = 0;
	  for(int l =18 ; l < 27 ; l++){setA[l] = setB[m]; m+=3;}
    }
	 else if(p == 'l' && j == 1){
	    int m = 1;
	    for(int l =0 ; l < 9 ; l++){setA[l] = setB[m]; m+=3;}
	     m =0;
	     for(int l =9; l < 18 ; l++){setA[l] = setB[m]; m+=3;}
	     m = 2;
	     for(int l =18 ; l < 27 ; l++){setA[l] = setB[m]; m+=3;}
  	}
	  else if(p == 'm' && j == 1){
	    int m = 0;
	    for(int l =0 ; l < 9 ; l++){setA[l] = setB[m]; m+=3;}
	     m =1;
	     for(int l =9; l < 18 ; l++){setA[l] = setB[m]; m+=3;}
	     m = 2;
	     for(int l =18 ; l < 27 ; l++){setA[l] = setB[m]; m+=3;}
   }
	else if(p == 'r' && j == 1){
	    int m = 1;
	    for(int l =0 ; l < 9 ; l++){setA[l] = setB[m]; m+=3;}
	    m =2;
	    for(int l =9; l < 18 ; l++){setA[l] = setB[m]; m+=3;}
	    m = 0;
	    for(int l =18 ; l < 27 ; l++){setA[l] = setB[m]; m+=3;}
   }
	else if(p == 'l' && j == 2){
	   int m = 2;
	   for(int l =0 ; l < 9 ; l++){setA[l] = setB[m]; m+=3;}
	    m =1;
	    for(int l =9; l < 18 ; l++){setA[l] = setB[m]; m+=3;}
	    m = 0;
	    for(int l =18 ; l < 27 ; l++){setA[l] = setB[m]; m+=3;}
   }
	else if(p == 'm' && j == 2){
	   int m = 0;
       for(int l =0 ; l < 9 ; l++){setA[l] = setB[m]; m+=3;}
	   m =2;
	   for(int l =9; l < 18 ; l++){setA[l] = setB[m]; m+=3;}
	   m = 1;
	   for(int l =18 ; l < 27 ; l++){setA[l] = setB[m]; m+=3;}
  }
    else{
	   int m = 1;
	   for(int l =0 ; l < 9 ; l++){setA[l] = setB[m]; m+=3;}
	   m =0;
	   for(int l =9; l < 18 ; l++){setA[l] = setB[m]; m+=3;}
	    	   	    	 m = 2;
	   for(int l =18 ; l < 27 ; l++){setA[l] = setB[m]; m+=3;}
	 }
	 	 for(int i = 0; i<27; i++){
	    	    		if(i%3 == 0)cout << endl << value [setA[i]%13]<<suit[setA[i]/13]<<" ";
	    	    		else cout << value [setA[i]%13]<<suit[setA[i]/13]<<" ";
	    	    		}
	 	 p ='t';
	 	 while(p !='l' &&p !='m' && p != 'r' ){
	 		    cout << endl;
	 		    cout << "\nIs your card in the (l)eft, (m)iddle, or (r)ight pile: ";
	 		    cin >> p;
	 		   }
	    	    if(p == 'l' && k == 0){
	    	    int m = 0;

	    	   for(int l =0 ; l < 9 ; l++){setB[l] = setA[m]; m+=3;}
	    	    m = rand()%2+1;
	    	    int v = m;

	    	   for(int l =9; l < 18 ; l++){setB[l] = setA[m]; m+=3;}
	    	     m = rand()%2+1;
	    	    while (v == m) m = rand()%2+1;

	        for(int l =18 ; l < 27 ; l++){setB[l] = setA[m]; m+=3;}
	    }
	    else if(p == 'm' && k == 0){
	    	    int m = 1;

	    	for(int l =0 ; l < 9 ; l++){setB[l] = setA[m]; m+=3;}
	    	      m =2;


	    	for(int l =9; l < 18 ; l++){setB[l] = setA[m]; m+=3;}
	    	     m = 0;


	    	for(int l =18 ; l < 27 ; l++){setB[l] = setA[m]; m+=3;}
	     }
	     else if(p == 'r' && k == 0){
	    	 int m = 2;

	      for(int l =0 ; l < 9 ; l++){setB[l] = setA[m]; m+=3;}
	    	     m =1;


	      for(int l =9; l < 18 ; l++){setB[l] = setA[m]; m+=3;}
	    	     m = 0;


	      for(int l =18 ; l < 27 ; l++){setB[l] = setA[m]; m+=3;}
	     }
	    else if(p == 'l' && k == 1){
	    	 	int m = 1;

	    	   for(int l =0 ; l < 9 ; l++){setB[l] = setA[m]; m+=3;}
	    	    m =0;


	    	   for(int l =9; l < 18 ; l++){setB[l] = setA[m]; m+=3;}
	    	    m = 2;


	    	   for(int l =18 ; l < 27 ; l++){setB[l] = setA[m]; m+=3;}
	    	    	   	    }
	    else if(p == 'm' && k == 1){
	    	int m = 0;

	    	for(int l =0 ; l < 9 ; l++){setB[l] = setA[m]; m+=3;}
	    	  m =1;


	      	for(int l =9; l < 18 ; l++){setB[l] = setA[m]; m+=3;}
	    	    m = 2;


	       for(int l =18 ; l < 27 ; l++){setB[l] = setA[m]; m+=3;}
	    }
	    else if(p == 'r' && k == 1){
	    int m = 1;

	    for(int l =0 ; l < 9 ; l++){setB[l] = setA[m]; m+=3;}
	    m =2;


	    for(int l =9; l < 18 ; l++){setB[l] = setA[m]; m+=3;}
	    m = 0;


	   for(int l =18 ; l < 27 ; l++){setB[l] = setA[m]; m+=3;}
	    }
	    else if(p == 'l' && k == 2){
	    int m = 2;

	    for(int l =0 ; l < 9 ; l++){setB[l] = setA[m]; m+=3;}
	    m =1;


	   for(int l =9; l < 18 ; l++){setB[l] = setA[m]; m+=3;}
	    m = 0;


	   for(int l =18 ; l < 27 ; l++){setB[l] = setA[m]; m+=3;}
	   }
	   else if(p == 'm'&& k == 2){
	    	   int m = 0;

	    	   for(int l =0 ; l < 9 ; l++){setB[l] = setA[m]; m+=3;}
	    	     m =2;


	    	   for(int l =9; l < 18 ; l++){setB[l] = setA[m]; m+=3;}
	        	 m = 1;


	    	   for(int l =18 ; l < 27 ; l++){setB[l] = setA[m]; m+=3;}
	    }
	    else{
	    	   int m = 1;

	    	for(int l =0 ; l < 9 ; l++){setB[l] = setA[m]; m+=3;}
	    	    m =0;


	    	for(int l =9; l < 18 ; l++){setB[l] = setA[m]; m+=3;}
	    	    m = 2;


	    	  for(int l =18 ; l < 27 ; l++){setB[l] = setA[m]; m+=3;}
	    }
	   cout << "Your Card is: "<<value[setB[n]%13]<<suit[setB[n]/13]<<endl;
	   cin.sync();
	   cin.get(p);

	return 0;
}
