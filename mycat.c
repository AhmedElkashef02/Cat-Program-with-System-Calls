#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

#include <unistd.h>

int main(int argc, char *argv[]) {
	char buffer[1024];
	int ReadFile;
	int WriteFile;

	/* open input and output files */
	ReadFile = open("input.txt", O_RDONLY);
	WriteFile = open("output.txt", O_CREAT|O_WRONLY|O_APPEND, 0600);
	
	/* read and write byte by byte */
	/* read returns 0 when EOF - END OF FILE */
	while ( read(ReadFile, buffer, 1) > 0 ) { 
		write(WriteFile, buffer, 1);
	}

}
