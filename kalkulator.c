#include <stdio.h>

int main ()
{
    int a, b, x;
    char c;

    printf("Wpisz pierwszą liczbę : \n");   // podaj pierwsza liczbe przypisana do a
    scanf("%d", &a);
    printf("Wpisz drugą liczbę: \n");       // podaj pierwsza liczbe przypisana do b
    scanf("%d", &b);
    getchar();
    printf("Jaką operację chcesz wykonać (podaj znak): \n");
    scanf("%c", &c);

    switch (c)   /// działanie
    {
        case   '+': x=a+b;                  // operacja dodawania
            printf("Wynik to: %d\n", x); break;
        case   '-': x=a-b;                  // operacja odejmowania
            printf("Wynik to: %d\n", x); break;
        case   '*': x=a*b;                  // operacja mnożenia
            printf("Wynik to: %d\n", x); break;
        case   '/': x=a/b;                  // operacja dzielenia
            printf("Wynik to: %d\n", x);

    }
    
    return 0;
}