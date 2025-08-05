#include <stdio.h>
#include <assert.h>
#include "../src/lib/utils.h"

void test_funcionUtil() {
    // Prueba de la función funcionUtil
    int resultado = funcionUtil(5);
    assert(resultado == 10); // Suponiendo que funcionUtil duplica el valor
}

int main() {
    test_funcionUtil();
    printf("Todas las pruebas pasaron.\n");
    return 0;
}