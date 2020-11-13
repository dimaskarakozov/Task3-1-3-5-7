#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void prog1() {
    int a, b, c = 0;float h;
  
    printf("Введите a ");
    scanf("%d", &a);
    printf("Введите b ");
    scanf("%d", &b);
    printf("Введите h ");
    scanf("%f", &h);
    printf("\nмоя функция y=16/(8-2^x)");

    float i = a;

        while(i <= b){
        if ( int((3 - i) * 100000) != 0) {
            //printf(" %f ", (3 - i)*10000000==0   );
            c++;
            printf("\n%d",c);
            printf("     %f", i);
            printf("     %f", 16 / (8 - pow(2,i)));
       }
        else {
            c++;
            printf("\n%d", c);
            printf("     %f", i);
            printf("     ***");
        }

        i = i + h;

    }

}
void prog3() {
    double f, x, a, b, e, s;
    int n;

    printf("Введите икс для  f(x)=arcsin: ");
    scanf_s("%lf", &x);
    printf("Введите эпсилон ");
    scanf_s("%lf", &e);

    n = 0;

    b = x;
    s = x;

    f = asin(x);
    do {
        a = b; 
        b = (a * ( pow(x, 2))) * ((pow(2.0f * n + 1, 2)) / (2 * (n + 1) * (2 * n + 3)));
        s += b; 
        n += 1;
    } while ((a - b) > e);

    printf("\n");
    printf("функция равна         %10.20lf\n", f);
    printf("Сумма равна  %12.20lf\n", s);


}
void prog5() {
    int a, b = 0,i=2;
    printf("Введите число ");
    scanf("%d", &a);
    printf("\n\n Ответ:  1 ");
    while (a > 1) {
        if (a % i == 0) {
            a = a / i;
            printf(" %d ", i);
        }
        else {
            i++;
        }


    }
}
void prog7() {
    int a, b = 1,d=0;
    printf("Введите число ");
    scanf("%d", &a);
    
    while (a > b) {
       // printf(" %d ",b);
        if ( (a | b) == a ) {        
            d++;
        }
        b = b * 2;


    }
    printf("Ответ %d ",d);
}

int main()
{ 



    setlocale(LC_ALL, "Russian");
    



 
    int q = -1;

    while (q != 0) {
        printf("\n\n\n1)  Напечатать таблицу значений функции на отрезке [а, b] с шагом h.\nФункцию придумать самим, она должна иметь разрыв на отрезке[а, b].");
        printf("\n3) Вычислить сумму ряда Маркелона");
        printf("\n5) Вывести из каких простых чисел состоит число");
        printf("\n7) кол-во единиц в двоичной записи данного числа");



        printf("\nВведите число ");
        scanf_s("%d", &q);
        switch (q) {
        case 1: {
            prog1();
            break;
        }

        case 3: {
            prog3();
            break;
        }
        case 5: {
            prog5();
            break;
        }
        case 7: {
            prog7();
            break;
        }
        }


    }









    return 0;
}