#include <stdio.h>
#include "../include/headers/todo.h"
#include "../include/headers/common.h"

int main() {
    int opcion;
    
    printf("Bienvenido al Gestor de Tareas v%s\n", VERSION);
    
    do {
        mostrarMenu();
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1:
                agregarTarea();
                break;
            case 2:
                listarTareas();
                break;
            case 3:
                marcarCompletada();
                break;
            case 4:
                eliminarTarea();
                break;
            case 5:
                printf("\n¡Hasta luego!\n");
                break;
            default:
                printf("\nOpción inválida. Por favor intente de nuevo.\n");
        }
    } while (opcion != 5);
    
    return 0;
}