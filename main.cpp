#include "escultor.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main(void){
   
    Escultor *v3;
    int a = 120, b= 120, c = 120;

    v3 = new Escultor(a,b,c);
    
    v3->setColor(0,128,0,0);
    v3->putBox(0,80,0,1,0,30); // piso


    v3->cutBox(18,20,15,15,15,16);
    v3->cutBox(19,20,16,16,15,16); // cortes inferiores
    v3->cutBox(20,20,17,17,15,16);
    v3->cutBox(20,20,19,20,15,16);

    v3->cutBox(19,20,20,21,15,16);
    v3->cutBox(20,20,20,21,15,16); // cortes superiores
    v3->cutBox(19,20,20,21,15,16);
    v3->cutBox(18,20,21,21,15,16);

    v3->setColor(255,255,255,0);
    v3->putSphere(40,5,15,4); // bola de futebol 

    v3 ->setColor(192,192,192, 1);
    v3->putBox(1,1,0,9,10,10); // traves do gol
    v3->putBox(1,1,0,9,20,20); // traves do gol
	v3->putBox(1,1,10,10,10,20); // travessao do gol
    
    
    v3->putBox(79,79,0,9,10,10); // traves do gol
    v3->putBox(79,79,0,9,20,20); // traves do gol
    v3->putBox(79,79,10,10,10,20); // travessao do gol
    
    
    v3->putBox(40,40,1,1,2,28); // linha do meio de campo
    
	v3->putBox(45,45,1,1,10,20); // meio do campo
	v3->putBox(35,45,1,1,10,10); // meio do campo
	v3->putBox(35,35,1,1,10,20); // meio do campo
	v3->putBox(35,45,1,1,20,20); // meio do campo


	v3->putBox(35,45,1,1,20,20); // lateral
	v3->putBox(1,79,1,1,1,1); // lateral
	v3->putBox(1,79,1,1,29,29); // lateral


	v3->putBox(79,79,1,1,2,28); // escanteio
	v3->putBox(1,1,1,1,2,28); // escanteio
	
	
	v3->putBox(75,75,1,1,9,21); // pequena area
	v3->putBox(75,79,1,1,21,21); // pequena area
	v3->putBox(75,79,1,1,9,9); // pequena area
	
	v3->putBox(70,70,1,1,6,24); // grande area
	v3->putBox(70,79,1,1,24,24); // grande area
	v3->putBox(70,79,1,1,6,6); // grande area
	
	
	v3->putBox(5,5,1,1,9,21); // pequena area
	v3->putBox(2,5,1,1,21,21); // pequena area
	v3->putBox(2,5,1,1,9,9); // pequena area

	v3->putBox(9,9,1,1,6,24); // grande area
	v3->putBox(2,9,1,1,24,24); // grande area
	v3->putBox(2,9,1,1,6,6); // grande area
	

    v3->writeOFF((char*)"campodefutebol.off");

}
