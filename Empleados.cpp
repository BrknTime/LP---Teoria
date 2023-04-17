#include"Empleados.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    Empleado* e1 = new Empleado("Juan", "Perez", 30000, 72185145);
    Ejecutivo* e2 = new Ejecutivo("Fabricio", "Torres", 50000, 74568920);
    Gerente* e3 = new Gerente("Carlos", "Ruiz", 70000, 78619025);

    GestionEmpleado gestor_empleados;
    gestor_empleados.agregarEmpleado(e1);
    gestor_empleados.agregarEmpleado(e2);
    gestor_empleados.agregarEmpleado(e3);

    gestor_empleados.eliminarEmpleado(e1);

    Empleado* empleado_buscado = gestor_empleados.buscarEmpleado(74568920);
    if (empleado_buscado != nullptr) {
        empleado_buscado->mostrarInfo();
    } else {
        cout << "Empleado no encontrado" << endl;
    }

    return 0;
}