#include <stdio.h>
#include <unistd.h>

int main(){
    int a = 5;

    int pid = fork();
    // while(1)
    // {
    //     fork();
    //     printf("Soy el proceso hijo a = %d\n",a);
    // }
    // return 0;

    if(pid==0){
        printf("Soy el proceso hijo a = %d\n",a);
        execl("./hola","hola","juan","yo",(char *)NULL);
        printf("Esto no debería imprimir");
        sleep(20);
        return 0;
    }
    printf("Soy el proceso padre, a = %d\n",a);
    sleep(20);
    return 0;

}
