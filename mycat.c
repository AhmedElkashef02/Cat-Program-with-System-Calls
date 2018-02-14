#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

#include <unistd.h>

int main(int argc, char *argv[]) {
	char buffer[11];
	int ReadFile;
	int WriteFile;

	ReadFile = open("input.txt", O_RDONLY);
	read(ReadFile, buffer, 11);
	close(ReadFile);

	WriteFile = open("output.txt", O_CREAT | O_WRONLY, 0600);
	write(WriteFile, buffer, 11);
	close(WriteFile);
}
