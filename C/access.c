#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    
    if(argc == 1)
    {
        printf("[*] Enter Your Access Code: ");
        char accessCode[10];
        scanf("%9s", accessCode);
        if(strcmp(accessCode, "1234") == 0)
        {
            printf("[+] Access Granted!\n");
        } else {

            printf("[-] Incorrect Access Code!\n");
        }
        
    } else {

        printf("[*] Usage: %s\n", argv[0]);
    }

    return 0;
}