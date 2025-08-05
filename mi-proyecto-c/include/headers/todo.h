#ifndef TODO_H
#define TODO_H

#include <stdbool.h>

// Estructura para representar una tarea
typedef struct {
    int id;
    char descripcion[100];
    bool completada;
} Tarea;

// Declaración de funciones
void agregarTarea();
void listarTareas();
void marcarCompletada();
void eliminarTarea();
void mostrarMenu();

#endif
