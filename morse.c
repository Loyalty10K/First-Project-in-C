#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define Broj 100
int main() {
    char rec[Broj];
    char a[] = ".-";
    char b[] = "-...";
    char c[] = "-.-.";
    char d[] = "-..";
    char e[] = ".";
    char f[] = "..-.";
    char g[] = "--.";
    char h[] = "....";
    char i[] = "..";
    char j[] = ".---";
    char k[] = "-.-";
    char l[] = ".-..";
    char m[] = "--";
    char n[] = "-.";
    char o[] = "---";
    char p[] = ".--.";
    char q[] = "--.-";
    char r[] = ".-.";
    char s[] = "...";
    char t[] = "-";
    char u[] = "..-";
    char v[] = "...-";
    char w[] = ".--";
    char x[] = "-..-";
    char y[] = "-.--";
    char z[] = "--..";
    printf("Unesi rec: ");
    scanf("%s", rec);

    for (int k = 0; rec[k] != '\0'; k++) {
        char slovo = rec[k];

        switch (slovo) {
            case 'a': printf("%s ", a); break;
            case 'b': printf("%s ", b); break;
            case 'c': printf("%s ", c); break;
            case 'd': printf("%s ", d); break;
            case 'e': printf("%s ", e); break;
            case 'f': printf("%s ", f); break;
            case 'g': printf("%s ", g); break;
            case 'h': printf("%s ", h); break;
            case 'i': printf("%s ", i); break;
            case 'j': printf("%s ", j); break;
            case 'k': printf("%s ", k); break;
            case 'l': printf("%s ", l); break;
            case 'm': printf("%s ", m); break;
            case 'n': printf("%s ", n); break;
            case 'o': printf("%s ", o); break;
            case 'p': printf("%s ", p); break;
            case 'q': printf("%s ", q); break;
            case 'r': printf("%s ", r); break;
            case 's': printf("%s ", s); break;
            case 't': printf("%s ", t); break;
            case 'u': printf("%s ", u); break;
            case 'v': printf("%s ", v); break;
            case 'w': printf("%s ", w); break;
            case 'x': printf("%s ", x); break;
            case 'y': printf("%s ", y); break;
            case 'z': printf("%s ", z); break;
            default: printf("? ");
        }
    }
    printf("%s %s %s", b, c, a);
    // printf("%s", a);
printf("\n");
getchar(); // pojede zaostali Enter od scanf-a
printf("Pritisni Enter za izlaz...");
getchar(); // sad čeka tvoj pravi Enter
return 0;
}