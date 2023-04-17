#include <iostream>
#include <string>
using namespace std;
//Implementar un programa que permita agregar, eliminar y consultar empleados en una empresa, utilizando clases y interfaces adecuadas para implementar los principios SOLID.
class CALCULAR
{
private:
    int r,b,h,l1,l2;
public:
    CALCULAR(int, int,int,int,int);
    void GET();    
    void SETCIRCULO();
    void SETCUADRADO();
    void SETTRIANGULO();
};

CALCULAR::CALCULAR(int r, int b, int h,int l1, int l2)
{
    this->r = r;
    this->b = b;
    this->h = h;
    this->l1 = l1;
    this->l2 = l2;
}
void CALCULAR::SETCIRCULO()
{
    cout<<"Ingrese radio: ";
    cin>>r;
}
void CALCULAR::SETCUADRADO()
{
    cout<<"Ingrese base: ";
    cin>>b;
}
void CALCULAR::SETTRIANGULO()
{
    cout<<"Ingrese base: ";
    cin>>b;
    cout<<"Ingrese altura: ";
    cin>>h;
    cout<<"Ingrese lados"<<endl;
    cout<<"a: ";
    cin>>l1;
    cout<<"b: ";
    cin>>l2;

}
void CALCULAR::GET()
{
    int i=0;
    while(i!=10)
    { 
        cout<<"______"<<endl;
        cout<<"Que figura desea obtener su perimetro y area?"<<endl;
        cout<<"1.Circulo"<<endl;
        cout<<"2.Triangulo"<<endl;
        cout<<"3.Cuadrado"<<endl;
        cout<<"10.Salir"<<endl;
        cout<<"Ingresar opcion: ";
        cin>>i;
        switch(i)
        {
        case 1:
            SETCIRCULO();
            cout<<"El area es: "<<3.14*r*r<<endl;
            cout<<"El periemtro es: "<<3.14*2*r<<endl;
            break;
        case 2:
            SETTRIANGULO();
            cout<<"El area es: "<<(b*h)/2<<endl;
            cout<<"El periemtro es: "<<l1+l2+b<<endl;
            break;
        case 3:
            SETCUADRADO();
            cout<<"El area es: "<<b*b<<endl;
            cout<<"El periemtro es: "<<4*b<<endl;
            break;
        case 10:
            break;
        default:
            cout<<"No ingreso ninguna opcion";
        }
    }
}

int main()
{
    CALCULAR CALCULAR1(0,0,0,0,0);
    CALCULAR1.GET();
    return 0;
}