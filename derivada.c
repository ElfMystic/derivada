/*faça um programa para calcular a derivada de um polinômio.
O usuário fornece o grau do polinômio e a seguir seus coeficientes.*/

#include <stdio.h>

    int main (){

        int grau;
        float x[6], deriv1, deriv2, deriv3, deriv4, deriv5, coeficiente, grau0;
        char buffer1[2], buffer2[2], buffer3[2], buffer4[2];
        char sinal1, sinal2, sinal3, sinal4;

        printf ("insira o grau do polinomio (1 a 5): ");
        scanf ("%f",&grau0);
        grau = round(grau0);

        switch (grau){
        case 1:
            printf ("\ninsira o termo independente: ");
            scanf ("%f",&x[0]);
            printf ("insira o coeficiente de x: ");
            scanf ("%f",&x[1]);
            deriv1 = x[1];
            printf ("\nderivada do polinomio: %.2f", deriv1);
            break;

        case 2:
            printf ("\ninsira o termo independente: ");
            scanf ("%f",&x[0]);
            printf ("insira o coeficiente de x: ");
            scanf ("%f",&x[1]);
            deriv1 = x[1];
            printf ("insira o coeficiente de x^2: ");
            scanf ("%f",&x[2]);
            deriv2 = x[2]*2;

            //sinal 1
            if (x[1] >= 0){
                sinal1 = '+';
                snprintf (buffer1, sizeof(buffer1),"%c",sinal1);
            }
            printf ("\nderivada do polinomio: %.2fx %s %.2f", deriv2, buffer1, deriv1);
            break;

        case 3:
            printf ("\ninsira o termo independente: ");
            scanf ("%f",&x[0]);
            printf ("insira o coeficiente de x: ");
            scanf ("%f",&x[1]);
            deriv1 = x[1];
            printf ("insira o coeficiente de x^2: ");
            scanf ("%f",&x[2]);
            deriv2 = x[2]*2;
            printf ("insira o coeficiente de x^3: ");
            scanf ("%f",&x[3]);
            deriv3 = x[3]*3;

            //sinal 1
            if (x[1] > 0){
                sinal1 = '+';
                snprintf (buffer1, sizeof(buffer1),"%c",sinal1);
            }
            //sinal 2
            if (x[2] > 0){
                sinal2 = '+';
                snprintf (buffer2, sizeof(buffer2),"%c",sinal2);
            }
            printf ("\nderivada do polinomio: %.2fx^2 %s %.2fx %s %.2f", deriv3, buffer2, deriv2, buffer1, deriv1);
            break;

        case 4:
            printf ("\ninsira o termo independente: ");
            scanf ("%f",&x[0]);
            printf ("insira o coeficiente de x: ");
            scanf ("%f",&x[1]);
            deriv1 = x[1];
            printf ("insira o coeficiente de x^2: ");
            scanf ("%f",&x[2]);
            deriv2 = x[2]*2;
            printf ("insira o coeficiente de x^3: ");
            scanf ("%f",&x[3]);
            deriv3 = x[3]*3;
            printf ("insira o coeficiente de x^4: ");
            scanf ("%f",&x[4]);
            deriv4 = x[4]*4;

            //sinal 1
            if (x[1] > 0){
                sinal1 = '+';
                snprintf (buffer1, sizeof(buffer1),"%c",sinal1);
            }
            //sinal 2
            if (x[2] > 0){
                sinal2 = '+';
                snprintf (buffer2, sizeof(buffer2),"%c",sinal2);
            }
            //sinal 3
            if (x[3] > 0){
                sinal3 = '+';
                snprintf (buffer3, sizeof(buffer3),"%c",sinal3);
            }
            printf ("\nderivada do polinomio: %.2fx^3 %s %.2fx^2 %s %.2fx %s %.2f", deriv4, buffer3, deriv3, buffer2, deriv2, buffer1, deriv1);
            break;

        case 5:
            printf ("\ninsira o termo independente: ");
            scanf ("%f",&x[0]);
            printf ("insira o coeficiente de x: ");
            scanf ("%f",&x[1]);
            deriv1 = x[1];
            printf ("insira o coeficiente de x^2: ");
            scanf ("%f",&x[2]);
            deriv2 = x[2]*2;
            printf ("insira o coeficiente de x^3: ");
            scanf ("%f",&x[3]);
            deriv3 = x[3]*3;
            printf ("insira o coeficiente de x^4: ");
            scanf ("%f",&x[4]);
            deriv4 = x[4]*4;
            printf ("insira o coeficiente de x^5: ");
            scanf ("%f",&x[5]);
            deriv5 = x[5]*5;

            //sinal 1
            if (x[1] > 0){
                sinal1 = '+';
                snprintf (buffer1, sizeof(buffer1),"%c",sinal1);
            }
             //sinal 2
            if (x[2] > 0){
                sinal2 = '+';
                snprintf (buffer2, sizeof(buffer2),"%c",sinal2);
            }
            //sinal 3
            if (x[3] > 0){
                sinal3 = '+';
                snprintf (buffer3, sizeof(buffer3),"%c",sinal3);
            }
            //sinal 4
            if (x[4] > 0){
                sinal4 = '+';
                snprintf (buffer4, sizeof(buffer4),"%c",sinal4);
            }
            printf ("\nderivada do polinomio: %.2fx^4 %s %.2fx^3 %s %.2fx^2 %s %.2fx %s %.2f", deriv5, buffer4, deriv4, buffer3, deriv3, buffer2, deriv2, buffer1, deriv1);
            break;

        default:
            printf ("\nvalor invalido, digite um numero de 1 a 5");
            break;
            }

        return 0;
        }
