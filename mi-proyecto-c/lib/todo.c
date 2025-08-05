#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "../include/headers/todo.h"

#define MAX_TAREAS 100

// Array global para almacenar las tareas
Tarea listaTareas[MAX_TAREAS];
int numTareas = 0;
int siguienteId = 1;

void agregarTarea() {
    if (numTareas >= MAX_TAREAS) {
        printf("\nLista de tareas llena.\n");
        return;
    }
    
    printf("\nIngrese la descripción de la tarea: ");
    getchar(); // Limpiar el buffer
    fgets(listaTareas[numTareas].descripcion, 100, stdin);
    listaTareas[numTareas].descripcion[strcspn(listaTareas[numTareas].descripcion, "\n")] = 0;
    
    listaTareas[numTareas].id = siguienteId++;
    listaTareas[numTareas].completada = false;
    numTareas++;
    
    printf("Tarea agregada con éxito!\n");
}

void listarTareas() {
    if (numTareas == 0) {
        printf("\nNo hay tareas pendientes.\n");
        return;
    }
    
    printf("\n----- LISTA DE TAREAS -----\n");
    for (int i = 0; i < numTareas; i++) {
        printf("ID: %d\n", listaTareas[i].id);
        printf("Descripción: %s\n", listaTareas[i].descripcion);
        printf("Estado: %s\n", listaTareas[i].completada ? "Completada" : "Pendiente");
        printf("-------------------------\n");
    }
}

void marcarCompletada() {
    int id;
    printf("\nIngrese el ID de la tarea a completar: ");
    scanf("%d", &id);
    
    for (int i = 0; i < numTareas; i++) {
        if (listaTareas[i].id == id) {
            listaTareas[i].completada = true;
            printf("Tarea marcada como completada!\n");
            return;
        }
    }
    printf("No se encontró la tarea con ese ID.\n");
}

void eliminarTarea() {
    int id;
    printf("\nIngrese el ID de la tarea a eliminar: ");
    scanf("%d", &id);
    
    for (int i = 0; i < numTareas; i++) {
        if (listaTareas[i].id == id) {
            for (int j = i; j < numTareas - 1; j++) {
                listaTareas[j] = listaTareas[j + 1];
            }
            numTareas--;
            printf("Tarea eliminada con éxito!\n");
            return;
        }
    }
    printf("No se encontró la tarea con ese ID.\n");
}

void mostrarMenu() {
    printf("\n=== GESTOR DE TAREAS ===\n");
    printf("1. Agregar tarea\n");
    printf("2. Listar tareas\n");
    printf("3. Marcar tarea como completada\n");
    printf("4. Eliminar tarea\n");
    printf("5. Salir\n");
    printf("Seleccione una opción: ");
}
