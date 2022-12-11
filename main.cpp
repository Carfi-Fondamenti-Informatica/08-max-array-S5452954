#include <iostream>
#include "lib.h"
using namespace std;



int main(){

    int dimensione = 0;
    cin >> dimensione;
    float numeri [dimensione];

    for (int i=0; i<dimensione; i++) {
        cin >> numeri[i];
    }

    float risultato = funzione (numeri, dimensione);
    cout << risultato;

    return 0;
}
