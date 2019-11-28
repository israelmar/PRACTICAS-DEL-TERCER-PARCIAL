#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;
void  menu ();
void leer_opcion(int &opt);


void printVector(int V[], int s);
void printVectorF(double V[], int s);
void scanVector(int V[], int s);

void suma(int v1[3],int v2[3],int *ptr);
void resta(int vector1[3],int v2[3],int *ptr);
float vectorEscalar (int V[], int V2[],int size);
void prodpunto (int V[3],int V2[3],int sz);
float norma (int Vector[],int s); 

 void punto(int Vector[3],int Vector2[3],int size);

void unitario(int vector1[3], int *ptr, double *ptr2);
int main(){

int opt;
float nrm,res;
char rep; 



int a[3] = {0,0,0}; 
int *ptra = &a[0];
int b[3] = {9,6,-2};
int c[3] = {0,0,0};
double cf[3] = {0.0,0.0,0.0}; 

int *ptrC = &c[0];
double *ptrCf = &cf[0];
	scanVector(a,3); 
	
		scanVector(b,3);

printf("\n Vector 1\n");
printVector(a,3);

printf("\n Vector 2\n");
printVector(b,3);


  do{
  
  		menu ();
		leer_opcion(opt);
switch(opt){
	case 1: 
	suma(a,b,ptrC);
printf("\n  >>>>>>>>>><<<<<<<<    suma Vector   <>>>>>>>>>>><>>><<< 1\n"); 
printVector(c,3); break;
	
	case 2: 
	resta(a,b,ptrC);
printf("\n >>><<>>>>>>><<<<<<<<<   resta Vector   >>>>>>>><<<<<<<<>>>>> 1\n");
printVector(c,3); break;
	
	case 3:
	
nrm = norma(a,3);
printf("\n>>>>>>>>>>>>>>>><<    norma Vector    >>>>>>><<<<<<<<<<<<%f \n",nrm);
break;

 	case 4: 
 	
printf(" \n <<<<<<<<   Producto punto   <<<<<<<<<<<<<");
prodpunto(a,b,3); 
break;
case 5: 


printf("\n \n >>>>>>> Producto escalar >>>>>>>>>><");
res = vectorEscalar(a,b,3); 
printf(" \n%f ",res);
 break;
 	
 
	
	
default:
    printf("opcion invalida"); break;
 }

 printf("\nDesea hacer otra operacion? S N \n");
rep = getch();
} while((rep=='S') || (rep=='s'));







}


void menu(){
 printf("1. suma\n");
 printf("2. resta\n");
 printf("3. norma\n");
 printf("4. producto punto\n");
  printf("5. producto escalar\n");
  
  

 }	
 void leer_opcion(int& opt){
 printf("seleccionar opcion");
 scanf("%d",&opt);
 }


void printVector(int Vector[],int size){
for (int i=0; i<size; i++){ 

	printf("posicion[%d]: %d \n",i,Vector[i]);
	}
}

void scanVector(int Vector[],int size){ 
for (int i=0; i<size; i++){
	int valor;
	printf("vector[%d]: \n",i);
	scanf("%d",&valor);
	Vector[i] = valor;
	
	}
}

void printVectorF(double myVector[],int size){  

for (int i=0; i<size; i++){
	printf("vector[%d]: %d\n",i,myVector[i]);
	}
}


void suma(int v1[3], int v2[3],int *ptr){
	for(int i = 0; i<3; i++){
		*(ptr+i) = v1[i] + v2[i]; 
	}
}
 

void resta(int v1[3], int v2[3],int *ptr){
	for(int i = 0; i<3; i++){
		*(ptr+i) = v1[i] - v2[i];
	}


}


float norma (int Vector[3],int size){
	double suma=0.0;
	for(int i = 0; i<=size; i++){
		suma += Vector[i]*Vector[i];
		
	}printf(" """""""" norma sin raiz %f  ********",suma);

	return sqrt(suma);

}
void prodpunto (int V[3],int V2[3],int sz){
	float suma=0.0;
	for(int i = 0; i<=sz; i++){
		suma += V[i]*V2[i]; 
		
	}
	printf(" \n la suma producto punto: %f", suma);

	

}
float vectorEscalar (int V[3], int V2[3],int size){
 double suma=0.0;
	for(int i = 0; i<=size; i++){
		suma += V[i]*V[i] +V2[i]*V2[i];
		
	}

	return sqrt(suma); 

}