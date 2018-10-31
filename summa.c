// Write and compile a simple program that asks for 
// two numbers and adds them together

/* yleiset kirjastot */
//program to find sum
#include <stdio.h> /* lukemista ja tulostusta varten */
#include <ctype.h> /* tyypin tarkistamista varten */
#include <stdlib.h> /* muuntaa merkin luvuksi */
#include <string.h> /* string pituuden laskeminen */

/* omat headerit */
#include "summa.h"

/* tässä tiedostossa näkyvät muuttujat */
int testi_1 = 0;
int testi_2 = 1;
int pituus = 0;
int summa = 0;
char luku_1[7];
char luku_2[7];

/* ohjelman pääfunktio */
int main(void)
	{
    int i;
	printf( " Anna kaksi lukua, lasken ne yhteen: \n" );

	printf( "\n Ensimmäinen luku: " );
	testi_1 = scanf( "%s", luku_1 );
    	tarkistus();
    
	printf( "\n Toinen luku: " );
	testi_1 = scanf( "%s", luku_2 );
    	tarkistus();
	
	luku_lopputulos = laske_yhteen( );
	summa = 0;
	printf( "\n Luvut yhteensä: %d \n", luku_lopputulos );
	luku_lopputulos = 0;

	return 0;
	}

void tarkistus( )
    {
	if ( 0 > testi_1 ) /* negatiivinen arvo indikoi virhettä, positiivinen merkkien määrä */
		{
		printf( "\n Virhe: lukeminen epäonnistui \n");
		}
    else if ( 0 == testi_2 ) /* nolla indigoi virhettä */
		{
		printf( "\n Virhe: annoit vääräntyyppisen merkin, anna numero. \n" );
		}
    }

int laske_yhteen( )
	{
    int eka = 0;
    int toka = 0;

    eka = atoi( luku_1 );
    toka = atoi( luku_2 );

	summa = eka + toka;
	return summa;
	}
