#include <iostream>

struct pracownik {
    char imie[50];
    char nazwisko[50];
    char plec;
};

int main() {
    pracownik emp;
    printf("Podaj imi� pracownika: ");
    scanf("%s", emp.imie);
    printf("Podaj nazwisko pracownika: ");
    scanf("%s", emp.nazwisko);
    printf("Podaj p�e� pracownika (k - kobieta, m - m�czyzna): ");
    scanf(" %c", &emp.plec);

    printf("Imi�: %s\n", emp.imie);
    printf("Nazwisko: %s\n", emp.nazwisko);
    printf("P�e�: %c\n", emp.plec);

    return 0;
}