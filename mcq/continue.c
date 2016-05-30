  #include <stdio.h>
    #include <string.h>
    int main()
    {
        char *str = "x";
        char c = 'x';
        char ary[1];
        ary[0] = c;
        printf("%d %d", strlen(str), strlen(ary));
        return 0;
    }
