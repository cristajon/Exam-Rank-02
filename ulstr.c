#include <unistd.h>
int main(int argc, char **argv)
{
    int i = 0;
    char changed;
    if(argc == 2)
    {
        while(argv[1][i])
        {
            if(argv[1][i]>= 'A' && argv[1][i] <= 'Z')
            {
                changed = argv[1][i] + 32;
                write(1, &changed, 1);
            }
            else if(argv[1][i]>= 'a' && argv[1][i] <= 'z')
            {
                changed = argv[1][i] - 32;
                write(1, &changed, 1);
            }
            else
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}