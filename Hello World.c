/*Write your C code here*/
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
    
    mode_t mode = S_IRUSR;
    int file = open("output.txt", O_CREAT | O_TRUNC | O_RDWR, mode);
    write(file, "Hi! My name is ", 15);
    close(file);
    
    
    return 0;
}
