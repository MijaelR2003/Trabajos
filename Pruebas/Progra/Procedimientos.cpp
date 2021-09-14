#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
void vectores();

void proyfun();
void ejercicio1();
void ejercicio2 ();
int ejercicio3(int a, int b);
int ejercicio4(int base, int pot);
void acirculo();
void acuadrado();
void arectangulo();
void atriangulo();
void ejercicio6(int a);
void ejercicio8();
void ejercicio9();
void ejercicio10();
int main (){
	int a; 
	cout<< "Vectores, Matrices y Funciones"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"(1) Vectores"<<endl;
	cout<<"(2) Matrices"<<endl;
	cout<<"(3) Procedimientos y funciones"<<endl;
	cin>>a;
	switch (a){
		case 1:
			vectores();
		break;
		case 2:
			
		break;
		case 3:
			proyfun();
		break;
	}
	//system("cls");
	getch();
}
void vectores(){
	int numprog=0;
	cout<<"Ingrese el numero del problema"<<endl;
	cin>>numprog;
	switch (numprog)
	{
		case 1 : {
			cout<<"Un programa que pide al usuario 4 numeros y muestra los numeros tecleados y la media de estos"<<endl;
			int num;
			float aux1 = 0;
			int vector1[4];
			for(int i=0; i<4; i++){
				cout<<"Ingrese el "<<i+1<<"° numero"<<endl;
				cin>>num;
				vector1[i]=num;
				aux1=num+aux1;
			}
			aux1=aux1/4;
			for(int j=0; j<4; j++){
			cout<<vector1[j]<<endl;
			}
			cout<<"La media de los numeros ingresados es: "<<aux1<<endl;
		break; }
		case 2 : {
			cout<<"Ingresar 5 numeros y mostrarlos en el orden invertido"<<endl;
			int num, cont=4;
			int vector2[5];
			for(int i=0; i<5; i++){
				int c=1;
				cout<<"introduzca el "<<c<<" numero"<<endl;
				cin>>num;
				vector2[i]=num;
				c++;
			}
			int vecaux[5];
			for(int j=0; j<5; j++){
				vecaux[j]=vector2[cont];
				cont--;
			}
			cout<<"Los numeros en el orden inverso son:"<<endl;
			for(int a=0; a<5; a++){
				cout<<vecaux[a]<<endl;
			}
		break; }
		case 3 :{
			cout<<"Programa que lee 10 numeros y los muestra en el orden inverso"<<endl;
			int num, cont=9;
			int vector[10];
			for(int i=0; i<10; i++){
				int c=1;
				cout<<"introduzca el "<<c<<" numero"<<endl;
				cin>>num;
				vector[i]=num;
				c++;
			}
			int vecaux[10];
			for(int j=0; j<10; j++){
				vecaux[j]=vector[cont];
				cont--;
			}
			cout<<"Los numeros en el orden inverso son:"<<endl;
			for(int a=0; a<10; a++){
				cout<<vecaux[a]<<endl;
			}
		break; }
		case 4 :{
			cout<<"Programa que lee 10 numeros, saca su media y muestra solo los que sean mayores a la media"<<endl;
			int num, vector[10];
			float aux=0;
			for(int i=0; i<10; i++){
				cout<<"Ingrese el "<<i+1<<" numero"<<endl;
				cin>>num;
				vector[i]=num;
				aux=num+aux;
			}
			aux=aux/10;
			cout<<"La media es: "<<aux<<endl<<"Los numeros mayores a la media son:"<<endl;
			for(int j=0; j<10; j++){
				if(vector[j]>=aux){
					cout<<vector[j]<<endl;
				}
			}
		break; }
		case 5 :{
			cout<<"Programa para ingresar 10 numeros en un vector y mostrar cual es el mayor"<<endl;
			int num, vector[10];
			int aux=0;
			for(int i=0; i<10; i++){
				cout<<"introduzca el "<<i+1<<" numero"<<endl;
				cin>>num;
				vector[i]=num;
				if(vector[i]>aux){
					aux=vector[i];
				}
			}
			cout<<"El numero mayor de los numeros ingresados es: "<<aux<<endl;
		break; }
		case 6 :{
			cout<<"Programa que suma los elementos de 2 vectores en un tercer vector"<<endl;
			int num1, num2, num3, v1, v2, v3, aux1=0, aux2=0;
			cout<<"De que tamaño sera el primer vector"<<endl;
			cin>>v1;
			cout<<"De que tamaño sera el segundo vector"<<endl;
			cin>>v2;
			int vector1[v1], vector2[v2];
			for(int i=0; i<v1; i++){
				cout<<"Ingrese el "<<i+1<<" numero del primer vector"<<endl;
				cin>>num1;
				vector1[i]=num1;
			}
			for(int j=0; j<v2; j++){
				cout<<"Ingrese el "<<j+1<<" numero del segundo vector"<<endl;
				cin>>num2;
				vector2[j]=num2;
			}
			if(v1>v2){
				v3=v1;
			for(int a=v2; a<=v3; a++){
				vector2[a]=0;
			}
			int vector[v3];
			for(int cero=0; cero<v3; cero++){
				vector[cero]=0;
			}
			vector1[v3]=0;
			for(int k=0; k<v1; k++){
				aux1=vector1[k];
				aux2=vector2[k];
				vector[k]=aux1+aux2;
				cout<<"La suma de los vectores es:"<<endl;
				for(int c=0; c<v3; c++){
					cout<<vector[c]<<endl;
				}
			}
			}else{
				v3=v2;
				for(int a=v1; a<=v3; a++){
					vector1[a]=0;
				}
				int vector[v3];
				for(int cero=0; cero<v3; cero++){
					vector[cero]=0;
				}
				for(int l=0; l<v2; l++){
					aux1=vector1[l];
					aux2=vector2[l];
					vector[l]=aux1+aux2;
				}
				cout<<"La suma de los vectores es:"<<endl;
				for(int c=0; c<v3; c++){
					cout<<vector[c]<<endl;
				}
			}
		break; }
		case 7 :{
			cout<<"Programa para mostrar en un vector los valores consecutivos de 2 vectores"<<endl;
			int num1, num2, tam1, tam2, tam3;
			cout<<"Ingrese el tamaño del primer vector"<<endl;
			cin>>tam1;
			int vector1[tam1-1];
			cout<<"Ingrese el tamaño del segundo vector"<<endl;
			cin>>tam2;
			int vector2[tam2-1];
			for(int i=0; i<tam1; i++){
				cout<<"Ingrese el "<<i+1<<" numero"<<endl;
				cin>>num1;
				vector1[i]=num1;
			}
			for(int j=0; j<tam2; j++){
				cout<<"Ingrese el "<<j+1<<" numero"<<endl;
				cin>>num2;
				vector2[j]=num2;
			}
			tam3=tam1+tam2;
			tam2--;
			int cont=0;
			for(int c=tam2; c<tam3; c++){
				vector1[c]=vector2[cont];
				cont++;
			}
			cout<<"El vector completo es:"<<endl;
			for(int def=0; def<tam3; def++){
				cout<<vector1[def]<<endl;
			}
		break;}
		case 8 :{
			cout<<"Programa para crear vectores con los elementos pares e impares de 2 valores introducidos"<<endl;
			int num1, num2, cont1=0, cont2=0;
			cout<<"Ingrese el primer numero"<<endl;
			cin>>num1;
			cout<<"Ingrese el segundo numero"<<endl;
			cin>>num2;
			int vectorpar1[num1/2], vectorpar2[num2/2], vectorimpar1[(num1/2)+1],
			vectorimpar2[(num2/2)+1];
			int vec1, vec2, vec3, vec4;
			vec1=(num1/2)+1;
			vec2=(num1/2)+1;
			vec3=(num2/2)+1;
			vec4=(num2/2)+1;
			for(int i=0; i<=num1; i++){
				if(i%2==0){
					vectorpar1[cont1]=i;
					cont1++;
				}else{
					vectorimpar1[cont2]=i;
					cont2++;
				}
			}
			cont1=0;
			cont2=0;
			for(int j=0; j<=num2; j++){
			if(j%2==0){
				vectorpar2[cont1]=j;
				cont1++;
			}else{
				vectorimpar2[cont2]=j;
				cont2++;
				}
			}
			cout<<"Los numeros pares antes del primer termino son:"<<endl;
			for(int mos1=0; mos1<vec1; mos1++){
				cout<<vectorpar1[mos1]<<endl;
			}
			cout<<"Los numeros impares antes del primer termino son:"<<endl;
			for(int mos2=0; mos2<vec2; mos2++){
				cout<<vectorimpar1[mos2]<<endl;
			}
			cout<<"Los numeros pares antes del segundo termino son:"<<endl;
			for(int mos3=0; mos3<vec3; mos3++){
				cout<<vectorpar2[mos3]<<endl;
			}
				cout<<"Los numeros impares antes del segundo termino son:"<<endl;
			for(int mos4=0; mos4<vec4; mos4++){
				cout<<vectorimpar2[mos4]<<endl;
			}
		break; }
		case 9 :{
			cout<<"Programa que llena un vector con la Serie Fibonacci"<<endl;
			int num, ter1 = 0, ter2 = 1, ter3 = 0;
			cout<<"Ingrese hasta donde desea ver la serie Fibonacci"<<endl;
			cin>>num;
			int vector[num];
			for (int i = 0; i<num; i++)
			{
				vector[i]=ter3;
				//cout<<ter3<<" "<<endl;
				ter3 = ter1 + ter2;
				ter2 = ter1;
				ter1 = ter3;
			}
			for(int j=0; j<num; j++){
				cout<<vector[j]<<endl;
			}
		break;}
		case 10 :{
			cout<<"Programa que muestra los n multiplos de 5"<<endl;
			int num, cont=5;
			cout<<"Cuantos multiplos de 5 desea ver"<<endl;
			cin>>num;
			int vector[num];
			for(int i=0; i<num; i++){
				vector[i]=cont;
				cont=cont+5;
			}
			cout<<"Los multiplos de 5 son:"<<endl;
			for(int j=0; j<num; j++){
				cout<<vector[j]<<endl;
			}
		break; }
		default: cout<<"Ingreso un numero fuera del parametro"<<endl;
	}
}

void proyfun(){
	int a ; 
	cout<< "Funciones y procedimientos"<<endl;
	cout<< "------------------------------"<<endl;
	cout<< "(1) Ejercicio 1"<<endl;
	cout<< "(2) Ejercicio 2"<<endl;
	cout<< "(3) Ejercicio 3"<<endl;
	cout<< "(4) Ejercicio 4"<<endl;
	cout<< "(5) Ejercicio 5"<<endl;
	cout<< "(6) Ejercicio 6"<<endl;
	cout<< "(7) Ejercicio 7"<<endl;
	cout<< "(8) Ejercicio 8"<<endl;
	cout<< "(9) Ejercicio 9"<<endl;
	cout<< "(10) Ejercicio 10"<<endl;
	cout<< "Ingrese una opcion"<< endl;
	cin>> a; 
	system("cls");
	switch (a){
		case 1: 
			ejercicio1();
		break;
		case 2: 
			ejercicio2();
		break;
		case 3: 
			int a, b, t;
			cout<< "Ejercicio 3"<<endl;
			cout<<"------------------------"<<endl;
			cout<<"Ingrese un numero"<<endl;
			cin>> a;
			cout<<"Ingrese a cuanto quiere elevar el numero"<<endl;
			cin>>b;
			t = ejercicio3(a,b);
			cout<<"La potencia es: "<<t<<endl;
		break;
		case 4: 
			int base, exp;
			cout<< "Ejercicio 4"<<endl;
			cout<<"------------------------"<<endl;
			cout<<"Ingrese un numero para la base"<<endl;
			cin>>base;
			cout<<"Ingrese un numero para el exponente"<<endl;
			cin>>exp;
			cout<<"La base "<<base<<" elevado al exponente "<<exp<<" es: "<<ejercicio4(base, exp)<<endl;
		break;
		case 5: 
			int a2, b2, t2;
			cout<< "Ejercicio 5"<<endl;
			cout<<"------------------------"<<endl;
			cout<<"El numero 5 elevado al cubo"<<endl;
			a2 = 5;
			b2 = 3;
			t2 = ejercicio3(a2,b2);
			cout<<"El resultado es: "<<t2<<endl;
		break;
		case 6: 
			int a3;
			cout<< "Ejercicio 6"<<endl;
			cout<<"------------------------"<<endl;
			cout<<"Ingrese un numero para sacar su factorial"<<endl;
			cin>>a3;
			ejercicio6(a3);
		break;
		case 7: 
			int a1, b1, t1;
			cout<< "Ejercicio 7"<<endl;
			cout<<"------------------------"<<endl;
			cout<<"Ingrese un numero para elevarlo al cubo"<<endl;
			cin>> a1;
			b1 = 3;
			t1 = ejercicio3(a1,b1);
			cout<<"El numero al cubo es: "<<t1<<endl;
		break;
		case 8: 
			ejercicio8();
		break;
		case 9: 
			ejercicio9();
		break;
		case 10: 
			cout<< "Ejercicio 10"<<endl;
			ejercicio10();
		break;
	}
}

int ejercicio3(int a, int b){
	int a1, b1,i,c; 
	a1 = a;
	b1 = b;
	c = a;
	for (i = 1;i < b1; i++){
		a1 = a1 * c;		
	}
	return a1;
}
static void ejercicio4(){
	
}
void ejercicio6(int a){
	int  s = 1;
		for (int i = 2; i <= a; i++){
			s = s * i;
		}
	cout<<"El factorial es "<<s<<endl;
}
void ejercicio8(){
	int a,b;
	cout<< "Ejercicio 8"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"Ingrese el año en el que nacio"<<endl;
	cin>>a;
	b = 2021 - a;
	cout<<"Su edad es: "<<b<<endl;
}
void ejercicio9(){
	double a,b,c;
	cout<< "Ejercicio 9"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"Ingrese la distancia en km"<<endl;
	cin>>a;
	cout<<"Ingrese el tiempo en Hr"<<endl;
	cin>>b;
	c = a / b;
	cout<<"La velocidad es: "<<c<<" km/hr"<<endl;
}
void ejercicio10(){
	int a, aux = 0, b =0,z = 0; 
		cout<<"------------------------"<<endl;
		cout<<"Ingrese un numero para ver si es capicua"<<endl;
		cin>>a;
		aux = a ;
		while(aux > 1){
			b = aux % 10;
			aux = aux / 10;
			z = z * 10;
			z = z + b;
		}
		if (a == z){
			cout<<"El número "<< a<<" es capicua"<<endl;
		}
		else {
			cout<<"El número "<< a<<" no es capicua"<<endl;
		}
}
void ejercicio2 (){
	int a;
	cout<< "Ejercicio 2"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"Ingrese de que figura quiere encontrar su area"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"(1) Hallar el area de un circulo"<<endl;
	cout<<"(2) Hallar el area de un cuadrado"<<endl;
	cout<<"(3) Hallar el area de un rectangulo"<<endl;
	cout<<"(4) Hallar el area de un triangulo"<<endl;
	cin>>a;
	system("cls");
	switch (a){
		case 1:
			acirculo();
		break;
		case 2: 
			acuadrado();
		break;
		case 3:
			arectangulo();
		break;
		case 4:
			atriangulo();
		break;
	}
}
void acirculo(){
	double a, b, pi = 3.14;
	cout<<"Ingrese el radio del circulo en cm"<<endl;
	cin>>a;
	b = pi * a;
	cout<<"El area del circulo es: "<<b<<endl; 
}
void acuadrado(){
	double t,j=1;
	cout<<"Ingrese cuanto mide un lado del cuadrado en cm"<<endl;
	cin>>t;
	j = t * t;
	cout<<"EL area del cuadrado es: "<<j<<" cm^2"<<endl;
}
void arectangulo(){
	double a,b,c = 1;
	cout<<"Ingrese la base del rectangulo en cm"<<endl;
	cin>>a;
	cout<<"Ingrese la altura del rectangulo en cm"<<endl;
	cin>>b;
	c = a * b;
	cout<<"El area del rectangulo es: "<<c<<" cm^2"<<endl;
}
void atriangulo(){
	double a,b,c = 1;
	cout<<"Ingrese la base del triangulo en cm"<<endl;
	cin>>a;
	cout<<"Ingrese la altura del triangulo en cm"<<endl;
	cin>>b;
	c = (a * b) / 2;
	cout<<"El area del rectangulo es: "<<c<<" cm^2"<<endl;
}
int ejercicio4 (int x, int y){
	int potencia;
	if (y==1){
		potencia = x;
	}
	else {
		potencia = x * ejercicio4(x, y -1);
	}
	return potencia;
}
void ejercicio1(){
	double a,b,c;
	cout<< "Ejercicio 1"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"Ingrese el dividendo"<<endl;
	cin>>a;
	cout<<"Ingrese el divisor"<<endl;
	cin>>b;
	while (a >= b){
		a = a - b;
		c ++;
	}
	cout<<"El resto de la division es: "<<a<<endl;
	cout<<"El cociente de la division es: "<<c<<endl;
}







