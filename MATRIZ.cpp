// MARQUEZ CALDERON ISRAEL JAVIER
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <conio.h>
using namespace std;
void  imprimir_menu ();
void leer_opcion(int &opt);
void leerVector(int *ptr, int size);


void printMatrix(int *ptr,int size1, int size2);

void sumaMatrix( int *ptr2b, int *ptr2a, int *ptrR);
void restaMatrix(int *prtC, int *ptr2b, int *ptr2a);
void multMatrix(int *ptr, int *ptr2b, int *ptr2, int &ss);
void Fac(int *ptr, int *ptr2b, int f, int c, int &o, int &ret);
int main(){
	int opt, o = 3;	
	float n,e;
	char rep;



int a[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
int b[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
int c[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
	
int *ptrR = &c[0][0];
int *ptra = &a[0][0];
int *ptrb = &b[0][0];
	printf(" \n Vector 1\n");
	leerVector(ptra,3);
		printf(" \n Vector 2\n");
		leerVector(ptrb,3);

 printf(" \n***********      Posicion 1    ************\n");
 printMatrix(ptra,3,3);
 printf(" \n       ********       Posicion 2     **********\n");
 printMatrix(ptrb,3,3);
 
 do{
  
  		imprimir_menu ();
		leer_opcion(opt);
switch(opt){
	case 1:
	
	printf(" \n *******     sistema de matris sumado   ********+\n");
sumaMatrix( ptra, ptrb,ptrR);
 break;
 	case 2:  
 printf(" \n***********     matris restada    ******** \n");
restaMatrix( ptrb, ptra, ptrR);
break;
	case 3: 
printf(" \n *¨******       multiplicacion de matris   ****** \n");
multMatrix(ptra, ptrb, ptrR,o);

break; default: printf("\n *********       fuera de rango        *********."); break;
 }

 printf("\nDesea hacer otra operacion? S N \n");
rep = getch();
} while((rep=='S') || (rep=='s'));





}
void leerVector(int *ptr,int s){
	int valor;
for (int i=0; i<s; i++){
	for(int j = 0; j < s ; j++){
	printf("[%d][%d]: \n",i,j);
	scanf("%d",&valor);
*(ptr+j+(i*s)) = valor;
	
	}
}}

void printMatrix(int *ptr,int s1, int s2){
	for(int i = 0; i < s1 ; i++){
		for(int j = 0; j < s2 ; j++){
			printf("%d   ",*(ptr+j+(i*s1)));
		}
		printf("\n");
	}
}


void sumaMatrix( int *ptr2b, int *ptr2, int *ptrR){
  
	int suma = 0;
	for(int i = 0; i<3; i++){
	
		for(int j = 0; j<3; j++){
				
				*(ptrR+j+(i*3)) = *(ptr2+j+(i*3))+ *(ptr2b+j+(i*3)) ;
				printf("%d   ",*(ptrR+j+(i*3)));
		
		
		}
		printf("\n");
}}	
void restaMatrix(int *ptr, int *ptra, int *ptrb){
   ;
	int suma =0;
	for(int i = 0; i<3; i++){
	
		for(int j = 0; j<3; j++){
				
				*(ptr+j+(i*3)) = *(ptra+j+(i*3)) - *(ptrb+j+(i*3));
				printf("%d   ",*(ptr+j+(i*3)));
		
		
		}
		printf("\n");
}	
}
void multMatrix(int *ptr2, int *ptr2b, int *ptr, int &ss){
  int v=0;
  for(int i=0; i<ss; i++){
  	for(int j =0; j<ss;j++)
	  {
	  	Fac(ptr2,ptr2b,i,j,ss,v);
	  	*(ptr+j+(i*ss))=v;
	  		printf("%d   ",*(ptr+j+(i*ss)));
	  }
	  	printf("\n");
  }
  
}
void Fac(int *ptr2, int *ptr2b, int f, int c, int &o, int &ret){
	ret = 0 ;
	for(int i=0; i<o; i++){
		ret += (*(ptr2+i+(f*o)))*(*(ptr2b+c+(i*o)));
	}
}


void imprimir_menu(){
 printf("1. suma\n");
 printf("2. resta\n");
 printf("3. multiplicacion\n ");
  

 }	
 void leer_opcion(int& opt){
 printf("\n Introduce una opcion \n");
 scanf("%d",&opt);
 }