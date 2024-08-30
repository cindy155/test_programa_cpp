#include <iostream>

void funcion_con_error()
{
	int vector1[5] = {1, 2, 3, 4, 5};
	for (size_t i = 0; i< 5; i++)
	{
		std::cout << vector1[i] << std::endl;
	}
}
void funcion_que_pierde_memoria()
{
	int *leak = new int;
}
int main(){
	std::cout << "¡Hola a todos, bienvenidos a algoritmos y estructura de datos!" << std::endl;
	funcion_con_error();
	// funcion_que_pierde_memoria();
	return 0;
}