#include <unistd.h>
int main(int argc, char **argv)
{
    int i = 0;
    int c = 0;
    if (argc != 2)
    {
               write(1, "\n", 1);
        return 0;
    }
        while(argv[1][i])
        {
            if((argv[1][i]>= 'A') && (argv[1][i] <= 'Z'))
            {
                c = 0;
                while(c < argv[1][i] + 1 - 'A')
                {
                    write(1, &argv[1][i], 1);
                    c++;
                }
            }
            else if((argv[1][i]>= 'a') && (argv[1][i] <= 'z'))
            {
                c =0;
                while(c < argv[1][i] + 1 - 'a')
                {
                    write(1, &argv[1][i], 1);
                    c++;
                }
            }
            else
            {
                write(1, &argv[1][i], 1);
            } 
                i++;
        }
        write(1, "\n", 1);
                       return 0;

}
