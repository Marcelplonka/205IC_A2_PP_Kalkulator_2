#include <stdio.h>
#include <stdlib.h>

struct znak {
    char znak;
};

struct WypiszWartosci {
    float x, y;
    float wynik;
    struct znak znak;
};

struct WypiszWartosci *WczytajDane();

void WypiszDane(struct WypiszWartosci *f);

//--------------------------------------------------

struct WypiszWartosci *WczytajDane() {
    struct WypiszWartosci *MojeDzialania = (struct WypiszWartosci *)
            malloc(sizeof(struct WypiszWartosci));
    scanf("%f %c %f", &(MojeDzialania->x), &(MojeDzialania->znak.znak), &(MojeDzialania->y));

    return MojeDzialania;
}

void WypiszDane(struct WypiszWartosci *f) {

    switch (f->znak.znak) {
        case '+':
            f->wynik = f->x + f->y;
            printf("%.2f", f->wynik);
            break;

        case '-':
            f->wynik = f->x - f->y;
            printf("%.2f", f->wynik);
            break;

        case '*':
            f->wynik = f->x * f->y;
            printf("%.2f", f->wynik);
            break;

        case '/':
            if ((f->y) != 0) {
                f->wynik = (float) f->x / f->y;
                printf("%.2f", f->wynik);

            } else {
                printf("Nie mozna dzielic przez zero!");
            }
            break;

        default:

            printf("Nieznane dzialanie!");
            break;

    }
}