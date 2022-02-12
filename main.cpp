#include <stdio.h>
#include <openssl/md5.h>
#include <string.h>
#include <iostream>

int main(int argc, char **argv)
{

    // return 0;
    std::string command;

    while (1)
    {
        std::cout << "ot> ";
        std::getline(std::cin, command);
        std::cout << command << std::endl;
        if (command.compare("md5") == 0)
        {
            MD5_CTX ctx;

            unsigned char outmd[16];
            int i = 0;
            memset(outmd, 0, sizeof(outmd));
            MD5_Init(&ctx);
            MD5_Update(&ctx, "hello\n", 6);
            // 46356AFE55FA3CEA9CBE73AD442CAD47
            // MD5_Update(&ctx, "lo\n", 3);
            MD5_Final(outmd, &ctx);
            for (i = 0; i < 16; i++)
            {
                printf("%02X", outmd[i]);
            }
            printf("\n");
        }
        if (command.compare("exit") == 0)
            break;
    }

    return 0;
}