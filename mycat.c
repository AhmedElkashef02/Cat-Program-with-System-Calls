#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

	for (int i = 1; i < argc; i++) {
	   
	   /* stop function at the final argument */
	   if ( i+1 > argc-1 ) { 
		return 0;
	   }

	   char buffer[1024];
	   int ReadFile;
	   int WriteFile;

	   /* open input and output files */
	   ReadFile = open(argv[i], O_RDONLY);
	   WriteFile = open(argv[i+1], O_CREAT|O_WRONLY|O_APPEND,0600);

	   /* If unable to open file */
	   if (ReadFile == -1) {
		perror("Error");
		return(-1);
	   }

	   /* read and write byte by byte */
	   /* read function returns 0 when EOF - END OF FILE */
	   while ( read(ReadFile, buffer, 1) > 0 ) { 
		write(WriteFile, buffer, 1);
	   }

	   /* close input and output files */
	   close(ReadFile);
	   close(WriteFile);
	}
}
