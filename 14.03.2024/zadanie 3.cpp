#include <iostream>

struct pracownik {
    char imie[50];
    char nazwisko[50];
    char plec;
};

int main() {
    pracownik emp;
    printf("Podaj imiê pracownika: ");
    scanf("%s", emp.imie);
    printf("Podaj nazwisko pracownika: ");
    scanf("%s", emp.nazwisko);
    printf("Podaj p³eæ pracownika (k - kobieta, m - mê¿czyzna): ");
    scanf(" %c", &emp.plec);

    printf("Imiê: %s\n", emp.imie);
    printf("Nazwisko: %s\n", emp.nazwisko);
    printf("P³eæ: %c\n", emp.plec);

    return 0;
}