#include <unistd.h>  // for write()
#include <fcntl.h>   // for open()
#include <string.h>  // for strlen()
#include <stdlib.h>  // for exit()
		     
int main(void)
{
    const char *msg = "Coding in C is powerful!\n";
		     
    // Write to standard output
    if (write(STDOUT_FILENO, msg, strlen(msg)) == -1)
    {
        write(STDERR_FILENO, "Error writing to stdout\n", 24);
	exit(1);
    }
		    
    // Open file write.txt (create if it doesn’t exist, truncate if it does)
    int fd = open("write.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
	write(STDERR_FILENO, "Error opening file\n", 19);
	exit(1);
    }
		     
    // Write to the file
    if (write(fd, msg, strlen(msg)) == -1)
    {
	write(STDERR_FILENO, "Error writing to file\n", 22);
	close(fd);
        exit(1);
    }
		     
    // Close file
    close(fd);
		     
    return 0;
}
