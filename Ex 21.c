#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
system ("color 0a");
char str[1000], newstr[1000];
int i = 0;
printf ("Insira uma string:\n");
gets(str); 
while (str[i] != '\0'){
    if (str[i] != 'a'||str[i] != 'e'||str[i] != 'i'||str[i] != 'o'||str[i] 
!= 'u'){
        newstr[i] = str [i];
    }else{
            if (str[i] != 'A'|| str[i] != 'E'|| str[i] != 'I'|| str[i] != 
'O'|| str[i] != 'U'){
                newstr[i] = str [i];
        }else{
                    if (str[i] != ' '){
                        newstr[i] = str [i];
            }
        }       
    }
    i++;
}
printf ("String sem vogais:\n");
puts (newstr);
system ("pause");
return 0;
}