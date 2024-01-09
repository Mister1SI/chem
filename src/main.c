#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


#include "lists.h"
#include "functions.h"

// Start a REPL loop to proccess commands
//
int main() {
	char* buffer = malloc(512);
	memset(buffer, 0, 512);

	write(1, "Type \"help\" for help menu.\n", 27);
	bool looping = true;

	while(looping) {
		write(1, "> ", 2);
		read(0, buffer, 512);
		if(strcmp(buffer, "help") == 0) {
			print_help();
		}
		else if(strcmp(buffer, "exit") == 0) {
			looping = false;
		}
		else {
			write(1, "Unrecognized command.\n", 22);
		}
	}
	

	free(buffer);
	return 0;
}



