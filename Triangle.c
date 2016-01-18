/*Write your C code here*/
#include <unistd.h>

int main() {
    //write(1, "Hi! My name is ", 15);
    
    int n = 4;
    int i;
    int j;
    
    for(i = 1; i <= n ; i++)
    {
        for(j = 0; j < i; j++)
        {
            write(STDERR_FILENO, "*", 1);
        }
        
        write(STDERR_FILENO, "\n", 1);
    }
    return 0;
}
