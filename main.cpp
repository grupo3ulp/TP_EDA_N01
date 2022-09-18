#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <cstdlib>

using namespace std;


int main() {
    char sexo;
    string nombre, apellido, nombre1, nombre2;
    float valor, altura, b, h, perimetro, superficie, alum1, alum2, alum3, alum4, media, cat1, cat2, hipotenusa,
            nPractica, nTeoria, nParticipacion, notaFinal, tiempo1, tiempo2, num1, num2, seg1, pesos, a1, b2, c, d, e, f, fA, fB, fC, fD,
            f1, x, y;
    float a2, b3, c2, x1, x2;
    const float IVA = 1.21;
    int opc, edad, dn, mn, an, da, ma, aa, edad1, a, b1, hora, min, seg;;
    char nombreArray[30];

    do {
        cout << "Menu TP N1" << "\n"
             << "Eliga el ejericio que quiere ver" << "\n"
             << "1. Ejercicio 1" << "\n"
             << "2. Ejercicio 2" << "\n"
             << "3. Ejercicio 3" << "\n"
             << "4. Ejercicio 4" << "\n"
             << "5. Ejercicio 5" << "\n"
             << "6. Ejercicio 6" << "\n"
             << "7. Ejercicio 7" << "\n"
             << "8. Ejercicio 8" << "\n"
             << "9. Ejercicio 9" << "\n"
             << "10. Ejercicio 10" << "\n"
             << "11. Ejercicio 11" << "\n"
             << "12. Ejercicio 12" << "\n"
             << "13. Ejercicio 13" << "\n"
             << "14. Ejercicio 14" << "\n"
             << "15. Ejercicio 15" << "\n"
             << "16. Ejercicio 16" << "\n"
             << "17. Ejercicio 17" << "\n"
             << "18. Ejercicio 18" << "\n"
             << "0.Salir" << "\n";
        cin >> opc;
        switch (opc) {
            case 1:
                cout << "EJERCICIO 1" << endl;
                cout
                        << "A) Haga un programa que permita la entrada de datos, ingresando el nombre y apellido del usuario, ademas debe"
                        << "\n"
                        << "mostrar el nombre_completo por pantalla. (considera los espacios)" << "\n"
                        << "B) Ejemplifique, como se coloca un comentario de una o varias lineas." << "\n"
                        << "C) Como se baja un renglon al mostrar algo por pantalla, nombre alternativas" << "\n";
                cout << "----------------" << endl;
                //comentario de linea
                /*comentario en
                 * bloqu*/
                cout << "Ingrese su nombre" << endl;
                cin >> nombre;
                cout << "Ingrese su apellido" << "\n";
                cin >> apellido;
                cout << apellido << " " << nombre << endl;
                system("pause");
                cout << "****************************************************************" << endl;

                break;
            case 2:
                cout << "EJERCICIO 2" << endl;
                cout << "Escribe un programa que lea de la entrada estandar el precio de un producto y muestre en la"
                     << endl
                     << "salida estandar el precio del producto al aplicarle el IVA" << endl
                     << "----------------" << endl;
                cout << "Ingrese el valor estandar del producto" << endl;

                cin >> valor;
                cout << "El valor del producto con IVA es de " << valor * IVA << endl;
                system("pause");
                cout << "****************************************************************" << endl;

                break;
            case 3:
                cout << "EJERCICIO 3" << endl;
                cout
                        << "Ejercicio 3: Realice un programa que lea de la entrada estandar los siguientes datos de una persona: Edad: dato"
                        << endl
                        << "de tipo entero. Sexo: dato de tipo caracter. Altura en metros: dato de tipo real. Tras leer los datos, el"
                        << endl
                        << "programa debe mostrarlos en la salida estandar" << endl;
                cout << "----------------" << endl;
                cout << "Ingrese la edad" << endl;
                cin >> edad;
                cout << "Ingrese el sexo (M=Mujer,H=Hombre,O=Otro)" << endl;
                cin >> sexo;
                cout << "Ingrese la altura" << endl;
                cin >> altura;
                cout << "Edad: " << edad << endl;
                cout << "Sexo: " << sexo << endl;
                cout << "Altura: " << altura << endl;
                system("pause");
                cout << "****************************************************************" << endl;
                break;
            case 4:
                cout << "EJERCICIO 4" << endl;
                cout
                        << "Ejecute el programa del ejercicio anterior con entradas erroneas y observe los resultados. Por ejemplo, introduzca"
                        << endl
                        << "un dato de tipo caracter cuando se espera un dato de tipo entero." << endl
                        << "Colocando una entrada erronea el programa se corta y las variables no cargadas junto con la que se coloco mal"
                        << endl
                        << "toman su valor defaul dependiendo del tipo que sean." << endl;
                system("pause");
                cout << "****************************************************************" << endl;
                break;
            case 5:
                cout << "EJERCICIO 5" << endl
                     << "Escriba un programa que lea de la entrada estandar base y altura de un rectangulo y escriba en la salida"
                     << endl
                     << "estandar su perimetro y superficie." << endl
                     << "----------------" << endl;
                cout << "Ingrese la base del rectangulo" << endl;
                cin >> b;
                cout << "Ingrese la altura del rectangulo" << endl;
                cin >> h;
                superficie = b * h;
                perimetro = 2 * (b + h);
                cout << "El Perimetro del rectangulo es de " << perimetro << endl;
                cout << "La Superficie del rectangulo es de " << superficie << endl;
                system("pause");
                cout << "****************************************************************" << endl;
                break;
            case 6:
                cout << "EJERCICIO 6" << endl

                     << "Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los"
                     << endl
                     << "cuatro alumnos" << endl
                     << "----------------" << endl;
                cout << "Ingrese la nota final del alumno 1" << endl;
                cin >> alum1;
                cout << "Ingrese la nota final del alumno 2" << endl;
                cin >> alum2;
                cout << "Ingrese la nota final del alumno 3" << endl;
                cin >> alum3;
                cout << "Ingrese la nota final del alumno 4 " << endl;
                cin >> alum4;
                media = (alum1 + alum2 + alum3 + alum4) / 4;
                cout << "La nota final media de los alumnos es de " << media << endl;
                system("pause");
                cout << "****************************************************************" << endl;
                break;
            case 7:
                cout << "EJERCICIO 7" << endl

                     << "Escriba un programa que lea de la entrada estandar los dos catetos de un triangulo rectangulo y escriba en la"
                     << endl
                     << "salida estandar su hipotenusa" << endl
                     << "----------------" << endl;
                cout << "Ingrese en cateto 1 del triangulo rectangulo" << endl;
                cin >> cat1;
                cout << "Ingrese en cateto 2 del triangulo rectangulo" << endl;
                cin >> cat2;
                hipotenusa = sqrt(pow(cat1, 2) + pow(cat2, 2));
                cout << "La hipotenusa del triangulo es de " << round(hipotenusa * 100) / 100 << endl;
                system("pause");
                cout << "****************************************************************" << endl;
                break;
            case 8:
                cout << "EJERCICIO 8" << endl
                     << "La calificacion final de un estudiante es la media ponderada de tres notas: la nota de practicas que cuenta un 30%"
                     << endl
                     << "del total, la nota teorica que cuenta un 60% y la nota de participacion que cuenta el 10% restante. Escriba un"
                     << endl
                     << "programa que lea de la entrada estandar las tres notas de un alumno y escriba en la salida estandar su nota final"
                     << endl
                     << "----------------" << endl;
                cout << "Ingrese la nota de practicas del alumno" << endl;
                cin >> nPractica;
                cout << "Ingrese la nota de teoria del alumno" << endl;
                cin >> nTeoria;
                cout << "Ingrese la nota participacion del alumno" << endl;
                cin >> nParticipacion;
                notaFinal = nPractica * 0.3 + nTeoria * 0.6 + nParticipacion * 0.1;
                cout << "La nota final del alumno es de " << notaFinal << endl;
                system("pause");
                cout << "****************************************************************" << endl;

                break;
            case 9:

                cout << "EJERCICIO 9" << endl
                     << "Escriba un programa que ingrese nombre y tiempo de nado de dos nadadoras y determine" << endl
                     << "y muestre cual de ellas llego primero" << endl
                     << "----------------" << endl;

                cout << "Ingrese el nombre de la nadadora 1" << endl;
                cin >> nombre1;
                cout << "Ingrese el tiempo de nado de la nadadora 1" << endl;
                cin >> tiempo1;
                cout << "Ingrese el nombre de la nadadora 2" << endl;
                cin >> nombre2;
                cout << "Ingrese el tiempo de nado de la nadadora 2" << endl;
                cin >> tiempo2;

                if (tiempo1 < tiempo2) {
                    cout << nombre1 << " tuvo el tiempo mas rapido con " << tiempo1 << " minutos" << endl;
                } else {
                    cout << nombre2 << " tuvo el tiempo mas rapido con " << tiempo2 << " minutos" << endl;
                }
                system("pause");
                cout << "****************************************************************" << endl;

                break;
            case 10:
                cout << "EJERCICIO 10" << endl
                     << "Escriba un programa que lea de la entrada estandar el nombre de una persona en un arreglo de caracteres."
                     << endl
                     << "Ademas pide el anio de nacimiento, y determina su edad en anios complidos." << endl
                     << "----------------" << endl;
                cout << "Ingrese su nombre: " << endl;

                //gets(nombreArray);
                fgets(nombreArray, 30, stdin);
                fgets(nombreArray, 30, stdin);
                cout << "Ingrese la Fecha de nacimiento:" << endl;
                cout << "\bDia: ";
                cin >> dn;
                cout << "\bMes: ";
                cin >> mn;
                cout << "\bAnio: ";
                cin >> an;

                cout << "\nFecha actual:" << endl;
                cout << "\bDia: ";
                cin >> da;
                cout << "\bMes: ";
                cin >> ma;
                cout << "\bAnio: ";
                cin >> aa;

                edad1 = aa - an;

                if (mn > ma) {
                    edad1--;
                } else if (ma == mn) {
                    if (dn > da) {
                        edad1--;
                    } else if (da == dn) {
                        cout << "Felicidades!!! Hoy es tu cumpleanios" << endl;
                    }
                }
                cout << "--------------------------------------------------------" << endl;
                cout << "Nombre: " << nombreArray << endl;
                cout << "Edad: " << edad1 << endl;
                system("pause");
                cout << "****************************************************************" << endl;

                break;
            case 11:
                cout << "EJERCICIO 11" << endl
                     << "Escribe un programa que lea de la entrada estandar dos numeros y muestre en la salida estandar su suma, resta,"
                     << endl
                     << "multiplicacion y division" << endl
                     << "----------------" << endl;
                cout << "Ingrese 2 numeros" << endl;
                cin >> num1 >> num2;
                cout << "La suma de los numeros es de: " << num1 + num2 << endl;
                cout << "La resta de los numeros es de: " << num1 - num2 << endl;
                cout << "La multiplicacion de los numeros es de: " << num1 * num2 << endl;
                if (num2 != 0) {
                    cout << "La division de los numeros es de: " << num1 / num2 << endl;
                } else {
                    cout << "No se puede dividir por cero" << endl;
                }
                system("pause");
                cout << "****************************************************************" << endl;
                break;
            case 12:
                cout << "EJERCICIO 12" << endl
                     << "Escriba un fragmento de programa que intercambie (swap) los valores de dos variables" << endl
                     << "----------------" << endl;
                cout << "Ingrese el valor de a (Entero): ";
                cin >> a;
                cout << endl << "Ingrese el valor de b (Entero): ";
                cin >> b1;
                swap(a, b1);
                cout << endl << "se intercambiaron los valores de las variables" << endl;
                cout << "Valor de a: " << a << endl;
                cout << "Valor de b: " << b1 << endl;
                system("pause");
                cout << "****************************************************************" << endl;

                break;
            case 13:
                cout << "EJERCICIO 13" << endl
                     << "Realice un programa que pida valores enteros para hora, otra para minutos, y otra para segundos, como resultado"
                     << endl
                     << "lo transforma y muestra el total a cantidad de segundos" << endl
                     << "----------------" << endl;
                cout << "Ingrese un valor de hora" << endl;
                cin >> hora;
                cout << "Ingrese un valor de minutos" << endl;
                cin >> min;
                cout << "Ingrese un valor de segundos" << endl;
                cin >> seg;
                cout << "El total del tiempo ingresado en segundos es de " << seg + min * 60 + hora * 3600 << endl;
                system("pause");
                cout << "****************************************************************" << endl;

                break;
            case 14:
                cout << "EJERCICIO 14" << endl
                     << "Haga un programa en donde se ingresara una cantidad X de segundos, para luego convertir a"
                     << endl
                     << "horas, minutos y segundos" << endl
                     << "----------------" << endl;
                cout << "Ingrese un numero de segundos" << endl;
                cin >> seg1;
                cout << "Se ingresaron " << seg1 << " segundos" << endl;
                cout << "Son equivalentes a: " << endl;
                cout << seg1 / 60 << " Minutos" << endl;
                cout << seg1 / 3600 << " Horas" << endl;
                system("pause");
                cout << "****************************************************************" << endl;

                break;
            case 15:
                cout << "EJERCICIO 15" << endl
                     << "Haga un programa que tenga como entrada una cantidad de dinero en pesos argentinos," << endl
                     << "y su salida sera el monto convertido a dolares, con dolar a 100$" << endl
                     << "----------------" << endl;
                cout << "Ingrese la cantidad de pesos a convertir a U$D" << endl;
                cin >> pesos;
                cout << "ARS$" << pesos << " son equivalentes a U$D" << pesos * 100 << endl;
                system("pause");
                cout << "****************************************************************" << endl;


                break;
            case 16:
                cout << "EJERCICIO 16" << endl
                     << "Escribe la siguiente expresion en C++. Use precision para la salida del cout." << endl
                     << "A) f(a,b)= (a/b) + 1" << endl
                     << "B) f(a,b)= (a+b)/(c+d)" << endl
                     << "C) f(a,b)= (a+(b/c))/(d+(e/f))" << endl
                     << "D) f(a,b)= a + (b/(c-d))" << endl
                     << "----------------" << endl;
                a1 = 1 + rand() % 10;
                b2 = 1 + rand() % 10;
                c = 1 + rand() % 10;
                d = 1 + rand() % 10;
                e = 1 + rand() % 10;
                f = 1 + rand() % 10;
                cout << "Se generaron valores aleatorios del 1 al 10 para las variables a,b,c , d y f" << endl
                     << "a:" << a1 << " -b:" << b2 << " -c:" << c << " -d:" << d << " -e:" << e << "- f:" << f
                     << endl;
                cout << "\nLas funcioes quedaron de la siguiente manera" << endl;
                fA = (a1 / b2) + 1;
                cout << "A) f(a,b)= (a/b) + 1 " << endl << "f es igual a: ";
                cout << setprecision(3) << fA << endl<<"---------"<< endl;
                fB = (a1 + b2) / (c + d);
                cout << "B) f(a,b)= (a+b)/(c+d)" << endl << "f es igual a: ";
                cout << setprecision(3) << fB << endl<<"---------"<< endl;
                fC = (a1 + (b2 / c)) / (d + (e / f));
                cout << "C) f(a,b)= (a+(b/c))/(d+(e/f))" << endl << "f es igual a: ";
                cout << setprecision(3) << fC << endl<<"---------"<< endl;
                fD = a1 + (b2 / (c - d));
                cout << "D) f(a,b)= a + (b/(c-d))" << endl << "f es igual a: ";
                cout << setprecision(3) << fD << endl<<"---------"<< endl;
                system("pause");
                cout << "****************************************************************" << endl;
                break;
            case 17:
                cout << "EJERCICIO 17 " << endl
                     << "Realice un programa que calcule el valor que toma la siguiente" << endl
                     << "funcion para unos valores dados de x e y: f(x,y) = (raiz de x)/(y al cuadrado - 1)" << endl
                     << "----------------" << endl;

                cout << "Ingrese el valor de x" << endl;
                cin >> x;
                cout << "Ingrese el valor de y" << endl;
                cin >> y;
                f1 = (sqrt(x)) / (pow(y, 2) - 1);
                cout << "El valor de f= " << f1 << endl;
                system("pause");
                cout << "****************************************************************" << endl;

                break;
            case 18:

                cout << "EJERCICIO 18" << endl
                     << "Escriba un programa que calcule las soluciones de una ecuacion de segundo grado de la forma ax^2 + bx + c = 0"
                     << endl
                     << "Utilizar la formula de la raiz cuadratica" << endl
                     << "----------------" << endl;
                cout << "Ingrese el valor de a de la ecuacion" << endl;
                cin >> a2;
                cout << "Ingrese el valor de b de la ecuacion" << endl;
                cin >> b3;
                cout << "Ingrese el valor de c de la ecuacion" << endl;
                cin >> c2;
                x1 = ((-b3) + (sqrt(pow(b3, 2) - 4 * a2 * c2))) / (2 * a2);
                x2 = ((-b3) - (sqrt(pow(b3, 2) - 4 * a2 * c2))) / (2 * a2);
                if (x1 != x1) {
                    cout << "La raiz x1 no tiene solucion R"<< endl;
                } else{
                    cout << "El valor de x1 es: " << x1 << endl;
                }
                if (x2 != x2) {
                    cout << "la Raiz x2 no tiene solucion R"<< endl;
                }else{
                    cout << "El valor de x2 es: " << x2 << endl;
                }


                system("pause");
                cout << "****************************************************************" << endl;

                break;

        }
    } while (opc != 0);
    return 0;
}
