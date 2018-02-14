#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

#include <unistd.h>

int main(int argc, char *argv[]) {
	int file = open("output.txt", O_CREAT | O_WRONLY, 0600);

	write(file, "bla bla\n", 9);

	close(file);
}
