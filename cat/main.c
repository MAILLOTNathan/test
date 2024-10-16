/*
  Header
 */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void print_fd(int fd)
{
    char buffer[32];
    size_t buffer_size = 32;
    ssize_t read_size = 1;

    while (read_size > 0) {
        read_size = read(fd, buffer, buffer_size);
        write(1, buffer, read_size);
    }
}

int main(int argc, char **argv)
{
    int index = 1;
    int fd = 0;
    int return_value = 0;

    if (argc == 1)
        print_fd(0);
    while (index < argc) {
        fd = open(argv[index], O_RDONLY);
        if (fd == -1) {
            printf("Code mieux %d.", index);
            return_value = 84;
        } else {
            print_fd(fd);
        }
        index += 1;
    }
    return return_value;
}
