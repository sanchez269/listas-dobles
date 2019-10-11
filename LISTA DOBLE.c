#include <iostream>
#include <stdlib.h>
using namespace std;
struct Nodo{
	int valor;
	Nodo *siguiente;
	Nodo *anterior;
	Nodo(int dato1){
		valor = dato1;
		siguiente = NULL;
	}
};

void agregar(int);
void mostrar();
struct Nodo *lista=NULL;
int main(int argc, char** argv) {

	    int opcion, add;
	    while(opcion!=3){

	    cout << "MENU" << endl;
        cout << "\t1 Llenar nodos" << endl;
        cout << "\t2 Mostrar en pantalla" << endl;
        cout << "\t3 Salir" << endl;
        cout << "Elije una opcion: ";
        cin >> opcion;

        	switch(opcion)
		{
			case 1:
				  cout << "Llenar nodos: " << endl;
				  cin>>add;
				  agregar(add);
				break;

			case 2:
				    cout << " Mostrar datos en pantalla: " << endl;
				    mostrar();
				break;

			case 3:
				system("cls");
				cout << "saliendo... \n";
				system(" pause");
				break;

}
}

	 return 0;

}
void agregar( int add)
{
   Nodo *nuevo = new Nodo(0);
   nuevo->siguiente=NULL;
   nuevo->anterior=NULL;
   nuevo->valor=add;
   if(lista==NULL)lista=nuevo;
   else{
   	Nodo *aux=lista;
   	while(aux->siguiente!=NULL){
   		aux=aux->siguiente;

	   }
	   nuevo->anterior= aux;
	   aux->siguiente=nuevo;
   }

}
void mostrar()
{
   Nodo *aux;
   aux=lista;
   while(aux!=NULL){
   		cout<<aux->valor<<" ";
   		aux=aux->siguiente;
	   }
	  cout<<endl;
   }



