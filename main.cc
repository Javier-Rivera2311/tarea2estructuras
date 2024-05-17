/**********************************************************************************************
 * Javier Rivera 20.916.820-0
 * Italo Ciaffaroni 20.478.375-6
 * Asignatura: "Estructuras de Datos" - ICI313
 * Ejemplo de estructura lista enlazada dinámica con header.
 * Implementada con POO
 * El header tiene un enlace la primer y último elemento de la lista
 **********************************************************************************************/

#include <iostream>
#include <string>
#include <Timer.hpp>
#include <Lista.hh>
#include <fstream>

int main(int argc, char* argv[])
{	

	//Valor por omisión
	int VF= true;
	int tNodos = 1000;

	if(argc == 3){
		VF = std::atoi(argv[1]);
		tNodos = std::atoi(argv[2]);

	}

	Lista lista01(VF);

	Timer<std::chrono::milliseconds> timer1;

	timer1.start();
	for(int idNodo=0; idNodo < tNodos; idNodo++){
		nodo_s* nodoNuevo = Lista::creaNodo(idNodo);
		lista01.insertarNodo( nodoNuevo );
	}
	timer1.stop();
	double tTranscurrido = timer1.elapsed();

	std::cout << "Tiempo transcurrido inserción de " << tNodos << ":" << tTranscurrido << "ms\n";

	
	return EXIT_SUCCESS;
}























