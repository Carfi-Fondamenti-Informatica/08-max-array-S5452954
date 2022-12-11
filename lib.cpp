#include "lib.h"

float funzione (float numeri[], int dimensione) {

    float massimo = numeri[0];

    for (int i=0; i<dimensione; i++) {
        if (numeri[i] > massimo) {
            massimo = numeri[i];
        }
    }
    return massimo;
}
