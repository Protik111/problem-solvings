#include <stdio.h>
int main()
{
    int i, T;
    char  input_string[100];
    scanf("%d", &T);
    for(i=0; i<T; i++){
        scanf("%[^\n]s",&input_string);
        printf("%s", input_string);
    }
    return 0;
}
