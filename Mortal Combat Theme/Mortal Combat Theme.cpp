// Mortal Combat Theme.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>      //For I/O Functions
#include <windows.h>   //For Beep & Sleep functions
#include<stdlib.h>  //For System Pause
#define A 220.00
#define B 246.94
#define Fis 369.99
#define Cis 277.18
#define D 293.66
#define H 246.94
#define E 329.63	
#define E2 164.81
#define F 174.61	
#define G 392.00
#define G2 196.00
#define Gis 415.30
#define Gis2 207.65
#define C 261.63
using namespace std;
const float cala_nuta = 2000;
float szesnastka = cala_nuta / 16;
float osemka = cala_nuta / 8;
float cwierc = cala_nuta / 4;

void first();
void second();
void third_intro();
void third();


int main()
{
	first();
	first();
	second();
	second();
	third();
	third();
	
	
    return 0;
}


void first()
{
	Beep(A, osemka);
	Beep(A, osemka);
	Beep(C, osemka);
	Beep(A, osemka);
	Beep(D, osemka);
	Beep(A, osemka);
	Beep(E, osemka);
	Beep(D, osemka);

	Beep(C, osemka);
	Beep(C, osemka);
	Beep(E, osemka);
	Beep(C, osemka);
	Beep(G, osemka);
	Beep(C, osemka);
	Beep(E, osemka);
	Beep(C, osemka);

	Beep(G2, osemka);
	Beep(G2, osemka);
	Beep(H, osemka);
	Beep(G2, osemka);
	Beep(C, osemka);
	Beep(G2, osemka);
	Beep(D, osemka);
	Beep(C, osemka);

	Beep(F, osemka);
	Beep(F, osemka);
	Beep(A, osemka);
	Beep(F, osemka);
	Beep(C, osemka);
	Beep(F, osemka);
	Beep(C, osemka);
	Beep(H, osemka);
}

void second()
{

	Beep(A, osemka + (osemka / 2));
	Beep(A, osemka + (osemka / 2));
	Beep(A, osemka + (osemka / 2));
	Beep(A, osemka + (osemka / 2));
	Beep(G2, osemka);
	Beep(C, osemka);

	Beep(A, osemka + (osemka / 2));
	Beep(A, osemka + (osemka / 2));
	Beep(A, osemka + (osemka / 2));
	Beep(A, osemka + (osemka / 2));
	Beep(G2, osemka);
	Beep(E2, osemka);

	Beep(A, osemka + (osemka / 2));
	Beep(A, osemka + (osemka / 2));
	Beep(A, osemka + (osemka / 2));
	Beep(A, osemka + (osemka / 2));
	Beep(G2, osemka);
	Beep(C, osemka);

	Beep(A, osemka + (osemka / 2));
	Beep(A, osemka + (osemka / 2));
	Beep(A, osemka + (osemka / 2));
	Beep(A, osemka + (osemka / 2));
	Beep(A, osemka + (osemka / 2));
	Sleep(szesnastka);
}

void third_intro()
{
	Beep(A, szesnastka);
	Beep(E, osemka);
	Beep(A, szesnastka);
	Beep(C, osemka);
	Beep(A, szesnastka);
	Beep(B, osemka);
	Beep(A, szesnastka);
	Beep(C, osemka);
	Beep(A, szesnastka);
	Beep(B, szesnastka);
	Beep(G2, osemka);
}

void third()
{
	third_intro();
	third_intro();
	third_intro();
	Beep(A, szesnastka);
	Beep(E, osemka);
	Beep(A, szesnastka);
	Beep(C, osemka);
	Beep(G2, szesnastka);
	Beep(G2, osemka);
	Beep(G2, szesnastka);
	Beep(A, osemka);
	Sleep(cwierc);
}