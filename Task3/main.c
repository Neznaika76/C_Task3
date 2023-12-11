//
//  main.c
//  Task3
//
//  Created by Pavel iPro on 03.12.2023.
//

#include <stdio.h>

// Задача 1

int main(int argc, const char * argv[]) {
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int max1 = a>b ? a : b;
    int max2 = c>d ? c : d;
    max1 = max1>e ? max1 : e;
    max1 = max1 > max2 ? max1 : max2;
    printf("%d\n",max1);
    return 0;
}

// Задача 2
/*
int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int min1 = a < b ? a : b;
    int min2 = c < d ? c : d;
    min1 = min1 < e ? min1 : e;
    min1 = min1 < min2 ? min1 : min2;
    printf("%d\n",min1);
    return 0;
} */

// Задача 3
/*
int main(int argc, char **argv)
{
int a, b, c;
scanf("%d%d%d", &a, &b, &c);
printf("%s\n", a<b && b<c ? "YES" : "NO");
return 0;
} */

// Задача 4
/*
int main(int argc, char **argv)
{
int a;
scanf("%d", &a);
switch(a)
    {
        case 1:case 2:case 12: printf("Зима\n"); break;
        case 3:case 4:case 5: printf("Весна\n"); break;
        case 6:case 7:case 8: printf("Лето\n"); break;
        case 9:case 10:case 11: printf("Осеньn\n"); break;
        default: printf("Неверное число\n");
    }
return 0;
} */
// изменения
