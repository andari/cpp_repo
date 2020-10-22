#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
        char *s;
    int frequency[10];
    for (int i=0;i<10;i++){
        frequency[i] = 0;
    }
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s)+1);

    for (int i=0;i<strlen(s);i++){
        if (s[i] == '0'){
            frequency[0] += 1;
        }
        if (s[i] == '1'){
            frequency[1] += 1;
        }
        if (s[i] == '2'){
            frequency[2] += 1;
        }
        if (s[i] == '3'){
            frequency[3] += 1;
        }
        if (s[i] == '4'){
            frequency[4] += 1;
        }
        if (s[i] == '5'){
            frequency[5] += 1;
        }
        if (s[i] == '6'){
            frequency[6] += 1;
        }
        if (s[i] == '7'){
            frequency[7] += 1;
        }
        if (s[i] == '8'){
            frequency[8] += 1;
        }
        if (s[i] == '9'){
            frequency[9] += 1;
        }
        
        

    }

    for(int i=0;i<10;i++){
        printf("%d ", frequency[i]);
    }
  
    return 0;
}
