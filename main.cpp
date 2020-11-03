#include <iostream>
#include "ArregloDinamico.h"
#include "computadora.h"
using namespace std;
int main(){
    ArregloDinamico<Computadora>computadoras;
    Computadora p01("david","linux",16,6);
    Computadora p02("guadalupe","windows",24,8);
    Computadora p03("vargas","Mac", 36,6);
    Computadora p05("Lopez","linux",64,16);
    Computadora p06("tarea 13","funciona",1,3);
    computadoras<<p01<<p02<<p03<<p02<<p02;
    Computadora p04("guadalupe","windows",24,8);
    ArregloDinamico<Computadora*>ptrs =computadoras.buscar_todos(p04);

    if(ptrs.size()>0){
        for(size_t i=0;i<ptrs.size();i++)
        {
            Computadora *p=ptrs[i];
            cout <<*p<<endl;
        }
    }
    else{
        cout <<"no existen coincidencias"<<endl;
    }
   /* Computadora*ptr= computadoras.buscar(p04);
    if(ptr !=nullptr){
        cout <<*ptr <<endl;
    }
    else
    {
        cout<<"No Existe"<<endl;
    }
    
    cout <<*ptr<<endl;
    /*ArregloDinamico<int>arreglo;
    for (size_t i=0;i<10; i++){
        arreglo.insertar_final(i);
    }
    arreglo.insertar(100, 2);
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar_final();
    arreglo.eliminar(5);
    for (size_t i=0;i<arreglo.size(); i++){
        cout <<arreglo[i]<< " ";
    }
    cout<<endl;
   int*v= arreglo.buscar(2);
   cout<<v<< " "<<*v<<endl;
    *v = 20;
  for (size_t i=0; i<arreglo.size();i++){
      cout<<arreglo[i]<< " ";
  }
    cout <<endl;*/
    return 0;
}