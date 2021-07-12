//Libreria
#include <stdio.h>
//Syscall
#include <fcntl.h>
#include <unistd.h>
int main (void){
//VARIABLES
int fd;
char buff[32];
ssize_t nr;
fd = open("/home/edgardoramirez/Escritorio/Lab/leer", O_RDONLY);

	if(fd== -1){
		printf("ERROR AL ABRIR! \n");
	}else{
		printf("CORRECTO! \n");

	nr = read(fd,buff,14);
	close(fd);

	if (nr==0){
		printf("ARCHIVO VACIO! \n");
	}else {
		printf("CONTENIDO: %s \n", buff);
	}
}
return 0;
}

//Mientras usando Declarativo
//"SELECT nombreC FROM Personas \n"
