#include <stdio.h>

int main (void)
{
    int choix;

    system("cat antibug.txt");
    printf("Quel est votre choix ?");

    scanf("%d", &choix);
    
    if(choix == 1)
    {
        system("cp /home/raph/fishgood/1/config.fish /home/raph/.config/fish/");
    }
    
    if(choix == 2)
    {
        system("cp /home/raph/fishgood/2/config.fish /home/raph/.config/fish/");
    }    
    return 0;
}