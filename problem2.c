#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
int main()
{
    pid_t pidB,pidC,pidD;

    pidD = fork();

    if(pidD == 0) {
        printf("Process ID: %d", getppid());
        getchar();

    } else {
        pidC= fork();
        if(pidC == 0) {
            pid_t pidG;
            pidG = fork();
            if(pidG == 0 ){
                getchar();
            } else {
                getchar();
            }
        } else {
            pidB = fork();
            if (pidB == 0) {
                pid_t pidE, pidF;
                pidF = fork();
                if(pidF == 0){
                    getchar();
                } else {
                    pidE = fork();
                    if (pidE == 0) {
                        pid_t pidI;
                        pidI = fork();
                        if(pidI ==0) {
                            getchar();
                        } else {
                            getchar();
                        }
                    } else {
                        getchar();
                    }
                }
            } else {
                getchar();
            }
        }
    }
}
