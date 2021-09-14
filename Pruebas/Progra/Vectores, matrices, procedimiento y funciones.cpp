#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <cmath>
#define hola 5
using namespace std;
void vectores();
void matriz();
void matriz1();
void matriz2();
void matriz3();
void matriz4();
void matriz5();
void matriz6();
void matriz7();
void matriz8();
void matriz9();
void matriz10();
void Amatriz(int matriz[][hola], int tam);
int determinante(int matriz[][hola], int tam);
int cofactor(int matriz[][hola], int tam, int filas, int columnas);
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
			matriz();
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



void matriz(){
	int a ; 
	cout<< "Matrices"<<endl;
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
			matriz1();
		break;
		case 2:
			matriz2();
		break;
		case 3:
			matriz3();
		break;
		case 4:
			matriz4();
		break;
		case 5:
			matriz5();
		break;
		case 6:
			matriz6();
		break;
		case 7:
			matriz7();
		break;
		case 8:
			matriz8();
		break;
		case 9:
			matriz9();
		break;
		case 10:
			matriz10();
		break;
		
	}
}
void matriz1(){
	 int num[2][2];
    
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<"Digite un valor["<<i<<"]["<<j<<"]: ";
            cin>>num[i][j];
            cout<<endl;
        }   
    }
    
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<num[i][j]<<" ";
            
        }
    }
    
    cout<<"La matriz transpuesta es: "<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<num[j][i]<<" ";
        }
        cout<<endl;
    }
}
void matriz2(){
	int matriz[hola][hola];
   int tam;

   cout << "Ingresa el tamaño de la matriz esta debe ser cuadrada (maximo de 5x5): ";
   cin >> tam;
   while (tam < 0 || tam > hola)
    {
        if (tam <= 2)
            {
               cout<< "El tamaño de la matriz no puede ser 1x1"<<endl;
               cout << "Ingrese nuevamente el tamaño de la matriz: ";
               cin >> tam;
            }
        else
            {
               cout << "El tamaño de la matriz no puede ser mayor que " << hola << endl;
               cout << "Ingrese nuevamente el tamaño de la matriz: ";
               cin >> tam;
            }

   }

   cout << " Ingrese los elementos de la matriz: "<<endl;
   for (int i = 0; i < tam; i++)
   {
      for (int j = 0; j < tam; j++)
      {
         cin >> matriz[i][j];
      }
   }

   cout << "La matriz generada es:"<<endl;
   Amatriz(matriz, tam);
   cout<<endl;

   cout << "El determinante es: " << determinante(matriz, tam) << endl;
}
void Amatriz(int matriz[][hola], int tam)
{
   cout << "El tamaño de la matriz es: " << tam<<"x"<<tam<< endl;
   for (int i = 0; i < tam; i++)
   {
      for (int j = 0; j < tam; j++)
      {
         cout << " " << matriz[i][j];
      }
      cout <<endl;
   }
}
int determinante(int matriz[][hola], int tam)
{
   int det = 0.0;

   if (tam == 1)
   {
      det = matriz[0][0];
   }
   else
   {
      for (int j = 0; j < tam; j++)
      {
         det = det + matriz[0][j] * cofactor(matriz, tam, 0, j);
      }
   }

   return det;
}
int cofactor(int matriz[][hola], int tam, int filas, int columnas)
{
   int submatriz[hola][hola];
   int n = tam - 1;

   int x = 0;
   int y = 0;
   for (int i = 0; i < tam; i++)
   {
      for (int j = 0; j < tam; j++)
      {
         if (i != filas && j != columnas)
         {
            submatriz[x][y] = matriz[i][j];
            y++;
            if (y >= n)
            {
               x++;
               y = 0;
            }
         }
      }
   }
   return pow(-1.0, filas + columnas) * determinante(submatriz, n);
}

void matriz3(){
	cout << "Proximamente"<<endl;
}

void matriz4(){
	int N=3,j;
    float m[1000][1000], coef, aux[1000], e;


	for (int i=0; i<N; i++)
		{
			for (int j=0; j<N; j++)
			{
				cout << "Ingrese el valor de "<<"["<<i<<"]""["<<j<<"]: ";
				cin >> m [i][j];
			}
		}

	for (int i=0; i<N; i++)
        {
            for(int j=N; j<2*N; j++)
            {
                if(i==(j-N))
                    {
                       m[i][j]=1;
                    }
                else
                    {
                        m[i][j]=0;
                    }
            }
        }

		for (int s=0; s<N; s++)
		{
			e=m[s][s];
			for (int j=0; j<2*N; j++)
                {
                   m[s][j]=m[s][j]/e;
                }
			for(int i=0; i<N; i++)
			{
				if (i!=s)
                    {
                        coef= m[i][s];
					
					for (int j=0; j<2*N; j++)
                        {
                           aux[j]=m[s][j]*(coef*-1); 
                        }
                        
					for (int j=0;j<2*N; j++)
                        {
                           m[i][j]=m[i][j]+aux[j]; 
                        }
                        
                    }
			}
		}

		for (int i=0; i<N; i++)
		{
			for(int j=N; j<2*N; j++)
                {
                  cout <<m[i][j]<<"   ";  
                }
                cout<<endl;
		 }
}

void matriz5(){
	int x,y,z,num;
    
    int MatrizA[200][200];
    int MatrizB[200][200];
    int MatrizC[200][200];
    
    cout<<"Ingrese el numero de filas de A: "<<" ";
    cin>>x;
    cout<<"Ingrese el numero de columnas de A: "<<" ";
    cin>>y;
    
    cout<<"Ingresando datos a la matriz A"<<endl;
            for (int i = 0; i< x; i++)
            {
                for (int j = 0; j < y; j++)
                {
                    cout<<"Ingrese la posicion [" <<i<< "][" <<j<< "] : ";
                    cin>>MatrizA[i][j];
                }
            }
            
    cout<<"Ingresando datos a la matriz B"<<endl;
            cout<<"Ingrese el numero de columnas de B: "<<" ";
            cin>>z;
            for (int i = 0; i< y; i++)
            {
                for (int j = 0; j < z; j++)
                {
                    cout<<"Ingrese la posicion [" <<i<< "][" <<j<< "] : ";
                    cin>>MatrizB[i][j];
                }
            }
            
    for(int i=0; i<x; ++i)
        for(int j=0; j<z; ++j)
            MatrizC[i][j] = 0;


    for(int i=0; i<x; ++i)
        for(int j=0; j<z; ++j)
            for(int k=0; k<y; ++k)
                MatrizC[i][j] += MatrizA[i][k] * MatrizB[k][j];

    cout<<"Matriz A: "<<endl;
    for(int i=0; i<x; ++i)
    {
        for(int j=0; j<y; ++j)
        {
            cout<<MatrizA[i][j]<<" ";
        }
        
        cout<<endl;
    }

    cout<<"Matriz B: "<<endl;
    for(int i=0; i<y; ++i)
    {
        for(int j=0; j<z; ++j)
        {
            cout<<MatrizB[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matriz C: "<<endl;
    for(int i=0; i<x; ++i)
    {
        for(int j=0; j<z; ++j)
        {
            cout<<MatrizC[i][j]<<" ";
        }
        cout<<endl;
    }
}

void matriz6(){
	float m[3][4]={};

	float x=0,y=0,z=0;

	cout<<"Ingrese los valores de las variables para las ecuaciones: ";
	cout<<endl;

	cout<<"[0][0]x [0][1]y [0][2]z= [0][3]";
	cout<<endl;

	cout<<"[1][0]x [1][1]y [1][2]z= [1][3]";
	cout<<endl;

	cout<<"[2][0]x [2][1]y [2][2]z= [2][3]";
	cout<<endl;

	for(int i=0; i<=2; i++)
	{

		for(int j=0; j<=3; j++)
		{
			cout<<"Inserte el valor de ["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		
		}

	}

	cout<<"Se genero: "<<endl;

	for(int i=0; i<=2; i++){

		cout<<m[i][0]<<"x "<<m[i][1]<<"y "<<m[i][2]<<"z = "<<m[i][3]<<endl;
		
	}
	m[2][1]=(m[1][1]*m[2][0])-(m[2][1]*m[1][0]);
		
	m[2][2]=(m[1][2]*m[2][0])-(m[2][2]*m[1][0]);
	
	m[2][3]=(m[1][3]*m[2][0])-(m[2][3]*m[1][0]);
	
	m[2][0]=(m[1][0]*m[2][0])-(m[2][0]*m[1][0]);
		
		
	m[1][1]=(m[0][1]*m[1][0])-(m[1][1]*m[0][0]);
		
	m[1][2]=(m[0][2]*m[1][0])-(m[1][2]*m[0][0]);
		
	m[1][3]=(m[0][3]*m[1][0])-(m[1][3]*m[0][0]);
		
	m[1][0]=(m[0][0]*m[1][0])-(m[1][0]*m[0][0]);
	
		
	m[2][2]=(m[1][2]*m[2][1])-(m[2][2]*m[1][1]);
		
	m[2][3]=(m[1][3]*m[2][1])-(m[2][3]*m[1][1]);
		
	m[2][1]=(m[1][1]*m[2][1])-(m[2][1]*m[1][1]);

	cout<<endl;
	for(int i=0; i<=2; i++)
	{
	
		cout<<m[i][0]<<" "<<m[i][1]<<" "<<m[i][2]<<" "<<m[i][3]<<endl;
	
	}


	z= m[2][3]/m[2][2];
	
	y= ( ((m[1][2]*z)*-1)+m[1][3] )/m[1][1];
	
	x= (m[0][3]+ ((m[0][1]*y)*-1) + ((m[0][2]*z)*-1) )/m[0][0];

	cout<<endl<<" El valor de las variables es:"<<endl;
	
	cout<<" El valor de x= "<<x<<endl;
	cout<<" El valor de y = "<<y<<endl;
	cout<<" El valor de z = "<<z<<endl;
}

void matriz7(){
	int num[200][200],filas,columnas;
    
    cout<<"Ingrese el numero de filas: ";
    cin>>filas;
    cout<<endl;
    cout<<"Ingrese el numero de columnas: ";
    cin>>columnas;
    cout<<endl;
    
    for(int i=0; i<filas; i++)
    {
        for(int j=0; j<columnas; j++)
        {
            cout<<"Digite un valor[" <<i<< "][" <<j<< "] : ";
            cin>>num[i][j];
        }   
    }
    
    for(int i=0; i<filas; i++)
    {
        for(int j=0; j<columnas; j++)
        {
            cout<<num[i][j]<<"  ";
        }
        cout<<endl;
    }
}

void matriz8(){
	 int n,m;
    
    int Matriz[200][200];
    int columna[200];
    int fila[200];
    
    cout<<"Ingrese el numero de filas de la matriz: "<<" ";
    cin>>n;
    cout<<"Ingrese el numero de columnas de la matriz: "<<" ";
    cin>>m;
    
    cout<<"Ingresando datos los datos a la matriz"<<endl;
            for (int i = 0; i< n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cout<<"Ingrese la posicion [" <<i<< "][" <<j<< "] : ";
                    cin>>Matriz[i][j];
                }
            }
            
    for (int i = 0; i< m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    columna[i]=columna[i]+Matriz[j][i];
                }
            }
            
    for (int i = 0; i< n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    fila[i]=fila[i]+Matriz[i][j];
                }
            }
            
    cout<<"La matriz es:"<<endl;
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            cout<<Matriz[i][j]<<" ";
        }
        
        cout<<endl;
    }
    
    cout<<"La suma de las filas es: "<<endl;
     for (int i = 0; i< n; i++)
            {
                cout<<fila[i]<<" ";
            }
            cout<<endl;
    
    cout<<"La suma de las columnas es: "<<endl;  
    for (int i = 0; i< n; i++)
            {
                cout<<columna[i]<<" ";
            }
            cout<<endl;
}

void matriz9(){
	int num[200][200],filas,columnas;
    
    cout<<"Ingrese el numero de filas: ";
    cin>>filas;
    cout<<endl;
    cout<<"Ingrese el numero de columnas: ";
    cin>>columnas;
    cout<<endl;
    
    for(int i=0; i<filas; i++)
    {
        for(int j=0; j<columnas; j++)
        {
            if ( i == j )
			{
				cout << 1 << " ";
			}
			else
			{
				cout << 0 << " ";
			}
        }
        cout<<endl;
	}
}

	void matriz10(){
		cout << "Proximamente"<<endl;
	}
	









