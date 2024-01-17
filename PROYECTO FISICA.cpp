// POR: PABLO RAUL JIMENEZ OJEDA //

#include<Stdio.h>
#include<Conio.h>
#include<math.h>
#define PI 3.14159265

void menu (void);
void conversion (void);
void componentesindividuales (void);
void paralelogramo (void);
void metodotriangulo (void);


int main (void)
{
	int opcion;
	
do{
    
    menu ();
    scanf ("%d", &opcion);
    
    switch (opcion)
    {
    	case 1: conversion (); break;
    	case 2: componentesindividuales (); break;
    	case 3: paralelogramo (); break;
    	case 4: metodotriangulo (); break; 
    	case 5: printf ("Es todo, gracias por usar!!"); break;
    	default: printf ("Error, introduce otra opcion valida"); break; 
	}

} while (opcion!= 5);

getch ();

return 0;	
	
}

void conversion (void)
{
	float cantidad;
	int factor;
	
printf ("Que conversion desea realizar? \n");
printf ("1. Km/hr a mi/min \n");
printf ("2. Km/s a m/s \n");
printf ("3. cm a in \n");
printf ("4. Kg a gr \n");
printf ("5. Kv a voltios \n");
printf ("6. cg/L a g/cm3 \n");
printf ("7. Mv a voltios \n");
printf ("8. V a MegaVoltios \n");
printf ("9. S a Picosegundos \n");
printf ("10. V a Gv \n");
printf ("Ingrese la opcion: \n");
scanf ("%d",&factor);



switch (factor)
{
	case 1: 
	printf ("\n Ingrese la cantidad de Km/hr que desea convertir a mi/min \n");
	scanf ("%f", &cantidad);
	printf ("\n Por %f km/hr hay %f mi/min \n\n", cantidad, cantidad*0.0103562);	break;
	case 2: 
	printf ("\n Ingrese la cantidad de Km/s que desea convertir a m/s \n");
	scanf ("%f", &cantidad);
	printf ("\n Por %f km/s hay %f m/s \n\n", cantidad, cantidad*1000);	break;
	case 3: 
	printf ("\n Ingrese la cantidad de cm que desea convertir a in \n");
	scanf ("%f", &cantidad);
	printf ("\n Por %f cm hay %f in \n\n", cantidad, cantidad*0.393701);	break;
	case 4	: 
	printf ("\n Ingrese la cantidad de kg que desea convertir a g \n");
	scanf ("%f", &cantidad);
	printf ("\n Por %f kg hay %f g \n\n", cantidad, cantidad*0.001);	break;
	case 5	: 
	printf ("\n Ingrese la cantidad de Kv que desea convertir a voltios \n");
	scanf ("%f", &cantidad);
	printf ("\n Por %f Kv hay %f voltios \n\n", cantidad, cantidad*0.001);	break;
	case 6	: 
	printf ("\n Ingrese la cantidad de cg/L que desea convertir a g/cm3 \n");
	scanf ("%f", &cantidad);
	printf ("\n Por %f cg/L hay %f g/cm3 \n\n", cantidad, cantidad*0.00001);	break;
	case 7	: 
	printf ("\n Ingrese la cantidad de Micro voltios que desea convertir a voltios \n");
	scanf ("%f", &cantidad);
	printf ("\n Por %f Micro voltios hay %f voltios \n\n", cantidad, cantidad/1000000); break;
	case 8	: 
	printf ("\n Ingrese la cantidad de V que desea convertir a Mega voltios \n");
	scanf ("%f", &cantidad);
	printf ("\n Por %f V hay %f Mega voltios \n\n", cantidad, cantidad/1000000); break;
	case 9	: 
	printf ("\n Ingrese la cantidad de S que desea convertir a Pico segundos \n");
	scanf ("%f", &cantidad);
	printf ("\n Por %f S hay %f pico segundos \n\n", cantidad, cantidad*1000000); break;
	case 10	: 
	printf ("\n Ingrese la cantidad de V que desea convertir a Gv \n");
	scanf ("%f", &cantidad);
	printf ("\n Por %f V hay %f Gv \n\n", cantidad, cantidad/1000000000); break;
	default: printf ("Error"); break;	
  }
		
}


void componentesindividuales (void)
{
	
float magnitud, angulo, fx, fy, fz, m, tang;
char pnx, pny, csx, csy;
int y=2; 

printf ("Sacaremos las componentes rectangulares de un cuadrante: \n");
printf ("Introduce la Magnitud: \n");
scanf ("%f", &magnitud);
printf ("Ahora introduce el Angulo: \n");
scanf ("%f", &angulo);


printf ("Iniciamos por el Fx. \n");
printf ("Fx es positivo o negativo? \n");
scanf (" %c", &pnx);
printf ("Fx es coseno o seno? \n");
scanf (" %c", &csx);

if (pnx == 'p' && csx == 'c')
{
	fx = cos(angulo*PI/180)*magnitud;
	printf ("El valor de fx es %f \n", fx);
}
else
if (pnx == 'p' && csx == 's')
{
	fx = sin(angulo*PI/180)*magnitud;
	printf ("El valor de fx es %f \n", fx);
}
else 
if (pnx == 'n' && csx == 'c')
{
	fx = - cos(angulo*PI/180)*magnitud;
	printf ("El valor de fx es %f \n", fx);
}
else 
if (pnx == 'n' && csx == 's')
{
	fx = - sin(angulo*PI/180)*magnitud;
	printf ("El valor de fx es %f \n", fx);
}
else 
{
printf("Entrada no válida.");
}


printf ("Ahora por el Fy. \n");
printf ("Fy es positivo o negativo? \n");
scanf (" %c", &pny);
printf ("Fy es coseno o seno? \n");
scanf (" %c", &csy);

if (pny == 'p' && csy == 'c')
{
	fy = cos(angulo*PI/180)*magnitud;
	printf ("El valor de fy es %f \n", fy);
}
else
if (pny == 'p' && csy == 's')
{
	fy = sin(angulo*PI/180)*magnitud;
	printf ("El valor de fy es %f \n", fy);
}
else 
if (pny == 'n' && csy == 'c')
{
	fy = - cos(angulo*PI/180)*magnitud;
	printf ("El valor de fy es %f \n", fy);
}
else 
if (pny == 'n' && csy == 's')
{
	fy = - sin(angulo*PI/180)*magnitud;
	printf ("El valor de fy es %f \n", fy);
}
else 
{
printf("Entrada no válida. \n");
}

printf ("\n Ahora sacaremos la magnitud mediante la formula: f = vfx2 + fy2 \n");
m= sqrt(pow (fx, y) + pow (fy, y));
printf ("\n F = v %f 2 + %f 2 \n", fx, fy);
printf ("\n El resultado de la magnitud haciendo uso de la formula de magnitud es igual a la raiz de la suma de los cuadrados de Fx y Fy es: %f \n\n ", m);

printf ("\n Por ultimo se sacara la direeción mediante la formula de la tangente = tang0 = fy/fx \n");
fz = fy/fx; 
tang = atan (fz)*(180.0/PI);
printf ("\n tang0 = %f/%f \n", fy, fx);
printf ("\n El valor de la direccion es: %f \n", tang);
printf ("\t\n Esas serian todas las componentes del cuadrante elegido! \n\n");
}
	
	
void paralelogramo (void)
{
	
float x, y, sumax, sumay, resultante, div, tang;
char r; 
int Y=2;

do{


printf ("\n Se realizara la suma de vectores mediante el metodo del paralelogramo! \n");
printf("\n Ingrese las componentes del vector (x y): \n");
scanf("%f %f", &x, &y);

sumax += x;
sumay += y;

printf("\n ¿Desea ingresar otro vector? (s/n): \n");
scanf(" %c", &r);

} while (r == 's' || r == 'S');

printf ("\n La suma de las x es: %f \n", sumax);
printf ("\n La suma de las y es: %f \n", sumay);

printf ("\n Ahora hayaremos la resultante y la direccion \n");
resultante = sqrt (pow (sumax, Y) + pow (sumay, Y));
printf ("\n El valor de la resultante es %f \n", resultante);

printf ("\n\n Ahora la direccion mediante la formula de la tangente = tang0 = fy/fx \n\n");
div = sumay/sumax; 
tang = atan (div)*(180.0/PI);
printf ("\n El valor de la direccion es: %f \n\n", tang);
printf ("\nPor lo tanto, la respuesta de este ejercicio es: \n\n");
printf ("\nSuma de componentes en x es: %f \n\n", sumax);
printf ("\nSuma de componentes en y es: %f \n\n", sumay);
printf ("\nLa resultante es %f \n\n", resultante);
printf ("\nY la direccion es: %f \n\n", tang);
printf ("\n Eso sería todo por el metodo del paralelogramo \n\n");
}


void metodotriangulo (void)
{

float valor1, valor2, angulo, valor3, valor4, angulo2, anguloeh, sen, R, D;
int variante, formula, y=2;
char r;

printf ("\n Se realizara la suma de vectores mediante el metodo del triangulo rectangulo! \n");
printf ("\n Para comenzar, es importante saber que si tienes un angulo de 90 grados, el ejercicio no tendra solucion.\n");

do{

printf ("\n En tu ejercicio hay un angulo de 90 grados? (s/n) \n");
scanf(" %c", &r);

if (r == 'n' || r == 'N')
{
	printf ("\n Perfecto, tiene solucion! \n");
	printf ("\n Primero encontraremos la magnitud de la Resultante:\n ");
	printf ("\n Cual variante de la ley de cosenos usarás? \n");
	printf ("\t 1. a2 = b2 + c2 - 2bc cos y \n\n");
	printf ("\t 2. b2 = a2 + c2 - 2ac cos B \n\n");
    printf ("\t 3. c2 = a2 + b2 - 2ab cos C \n\n");
    printf ("\t Ingrese la opcion: \n\n");
    scanf ("%d",&variante);
    
switch (variante)
{
	case 1: 
	printf ("Introduce el valor de b \n");
	scanf ("%f", &valor1);
	printf ("Introduce el valor de c \n");
	scanf ("%f", &valor2);
	printf ("Introduce el valor de y \n");
	scanf ("%f", &angulo);
	D = pow (valor1, y) + pow (valor2, y) - 2*valor1*valor2*cos(angulo*PI/180);
	R = sqrt (D);
	printf ("La magnitud de la Resultante es %f \n\n", R);
	printf ("Ahora vamos con el angulo que forma con el eje horizontal! \n"); break;
	case 2: 
	printf ("Introduce el valor de a \n");
	scanf ("%f", &valor1);
	printf ("Introduce el valor de c \n");
	scanf ("%f", &valor2);
	printf ("Introduce el valor del angulo B \n\n");
	scanf ("%f", &angulo);
	D = pow (valor1, y) + pow (valor2, y) - 2*valor1*valor2*cos(angulo*PI/180);
	R = sqrt (D);
	printf ("La magnitud de la Resultante es %f \n\n", R);
	printf ("Ahora vamos con el angulo que forma con el eje horizontal! \n"); break;
	case 3: 
	printf ("Introduce el valor de a \n");
	scanf ("%f", &valor1);
	printf ("Introduce el valor de b \n");
	scanf ("%f", &valor2);
	printf ("Introduce el valor del angulo C \n");
	scanf ("%f", &angulo);
	D = pow (valor1, y) + pow (valor2, y) - 2*valor1*valor2*cos(angulo*PI/180);
	R = sqrt (D);
	printf ("\t La magnitud de la Resultante es %f \n\n", R);
	printf ("\n Ahora vamos con el angulo que forma con el eje horizontal! \n\n"); break;
}

    printf ("\f Encontraremos el angulo utilizando la ley de senos Sen A/a = Sen B/b = SenC/c! \n\n");
    printf ("\n Que formula le conviene utilizar segun sus datos? \n\n");
    printf ("\t 1. sen (A) = a*senB/b \n\n");
	printf ("\t 2. sen (B) = b*senA/a \n\n");
    printf ("\t 3. sen (C) = c*senA/a = c*senB/b \n\n");
    printf ("\t Ingrese la opcion: \n\n");
    scanf ("%d",&formula);
    
switch (formula)
{
	case 1: 
	printf ("\f Ingresa los datos requeridos \n\n");
	printf ("Introduce el valor de a \n");
	scanf ("%f", &valor3);
	printf ("Introduce el valor de b \n");
	scanf ("%f", &valor4);
	printf ("Introduce el valor del angulo B \n\n");
	scanf ("%f", &angulo2); 
	sen= valor3 / valor4 * sin(angulo2*PI/180); 
	anguloeh = asin (sen)*(180.0/PI);
	printf ("\f El valor del angulo que se forma con el eje horizontal es %f \n\n", anguloeh); break; 
	case 2:
	printf ("\f Ingresa los datos requeridos \n\n");
	printf ("Introduce el valor de b \n");
	scanf ("%f", &valor3);
	printf ("Introduce el valor de a \n");
	scanf ("%f", &valor4);
	printf ("Introduce el valor del angulo A \n\n");
	scanf ("%f", &angulo2); 
	sen= valor3 / valor4 * sin(angulo2*PI/180); 
	anguloeh = asin (sen)*(180.0/PI);
	printf ("El valor del angulo que se forma con el eje horizontal es %f", anguloeh); break;
	case 3:
	printf ("Ingresa los datos requeridos");
	printf ("Introduce el valor de c \n");
	scanf ("%f", &valor3);
	printf ("Introduce el valor de a/b \n");
	scanf ("%f", &valor4);
	printf ("Introduce el valor del angulo A/B \n\n");
	scanf ("%f", &angulo2); 
	sen= valor3 / valor4 * sin(angulo2*PI/180); 
	anguloeh = asin (sen)*(180.0/PI);
	printf ("El valor del angulo que se forma con el eje horizontal es %f \n\n", anguloeh); break; 
}
  printf ("\n La respuesta al ejercicio por lo tanto es: \n");
  printf ("\n Magnitud de la resultante es %f \n", R);
  printf ("\n Y el angulo que forma con el eje horizontal es %f \n", anguloeh);
} 
	
else 
{
	printf("\t No se puede realizar, prueba con otro ejercicio o si deseas realizar algo mas! \n\n");
} break;
	
} while (r!= 's' || r != 'S');
		
}

void menu (void)
{
printf ("\t Bienvenido al menu de fisica para computacion, que desea realizar? \n\n");
printf ("\t 1. Conversiones \n");
printf ("\t 2. Encontrar las componentes individuales de un cuadrante \n");
printf ("\t 3. Realizar suma de vectores mediante el metodo del paralelogramo \n");
printf ("\t 4. Realizar suma de vectores mediante el metodo del triangulo rectangulo \n");
printf ("\t 5. Salir del menu \n");
printf ("\t Opcion \n");
}


