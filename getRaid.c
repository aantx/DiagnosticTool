#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    /*
    int result;
    result = system(".\\exectest.exe");
    printf("Ending-----,%d", result);
    */
    char var[40];
    FILE *outputfile = popen("\"C:\\Program Files\\Smart Storage Administrator\\ssacli\\bin\\ssacli.exe\" ctrl all show status", "r");
    printf("Begin\n");
    // printf(outputfile, "\nres-----------\n");
    while (fgets(var, sizeof(var), outputfile) != NULL)
    {
        printf("%s", var);
    }
    printf("\nFinished\n");
    getchar();
    return 0;
}