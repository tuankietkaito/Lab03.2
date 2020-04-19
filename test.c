#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

// A -+- B -+- E -+- I
//    |     `- F
//    |- C -+- G
//    `- D

int main()
{
    pid_t pB, pC, pD, pE, pF, pG, pI;
    pB = fork();
    if (pB == 0)
    {
        pE = fork();
        if (pE == 0)
        {
            pI = fork();
            if (pI == 0)
                getchar();
            else
                getchar();
        }
        else
        {
            pF = fork();
            if (pF == 0)
                getchar();
            else
                getchar();
        }
    }
    else
    {
        pC = fork();
        if (pC == 0)
        {
            pG = fork();
            if (pG == 0)
                getchar();
            else
                getchar();
        }
        else
        {
            pD = fork();
            if (pD == 0)
                printf('ID = %d', getppid());
            else
                getchar();
        }
    }
}
