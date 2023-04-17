#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Empleado
{
    private:
        string nombre, apellido;
        int dni;
        double salario;
    public:
        Empleado(string nombre, string apellido, double salario, int dni)
        {
            this->nombre=nombre;
            this->apellido=apellido;
            this->salario=salario;
            this->dni=dni;
        }
        virtual void mostrarInfo() 
        {
            cout << "Nombre: " << nombre << endl;
            cout << "Apellido: " << apellido<< endl;
            cout << "Dni: " << dni << endl;
            cout << "Salario: " << salario << endl;
        }
    int getDni()
    {
        return dni;
    }
};


class Ejecutivo : public Empleado {
    public:
        Ejecutivo(string nombre, string apellido, double salario, int dni) : Empleado(nombre, apellido, salario, dni) {}
        void mostrarInfo() 
        {
            cout << "Cargo: Ejecutivo" << endl;
            Empleado::mostrarInfo();
        }
};

class Gerente : public Empleado {
    public:
        Gerente(string nombre, string apellido, double salario, int dni) : Empleado(nombre, apellido, salario, dni) {}
        void mostrarInfo() 
        {
            cout << "Cargo: Gerente" << endl;
            Empleado::mostrarInfo();
        }
};


class GestionEmpleado
{
    private:
        vector<Empleado*> lista_empleados;
    public:
        void agregarEmpleado(Empleado* empleado)
        {
            lista_empleados.push_back(empleado);
        }
        void eliminarEmpleado(Empleado* empleado)
        {
            for (int i = 0; i < lista_empleados.size(); i++)
            {
                if (lista_empleados[i] == empleado)
                {
                    lista_empleados.erase(lista_empleados.begin() + i);
                    return;
                }
            } 
        }
        Empleado* buscarEmpleado(int dni)
        {
            for (int i = 0; i < lista_empleados.size(); i++) 
            {
                if (lista_empleados[i]->getDni() == dni) 
                {
                    return lista_empleados[i];
                }
            }
            return 0;
        }
};