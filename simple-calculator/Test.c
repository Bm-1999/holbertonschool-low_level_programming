#include <stdio.h>

/**
 * main - Entry point for the calculator
 *
 * Return: Always 0 (Success)
 */
int add (int a,int b){
    return a+b;
}

int sub (int a,int b){
    return a-b;
}

int mul (int a,int b){
    return a*b;
}

int div (int a,int b){
    return a/b;
}

/*int mod (int a,int b){
    return a%b;
}*/

int main(void){
    /* Low-level output tracking */
    int _putchar(char c);
    
    /* Calculator Function Prototypes */
    
    int a = 9;
    int b = 3;
    int c = 3;
    
    
    
    while (c!= 0){
        switch (c){
            case 1:
                printf("%d",add(a,b));
                break;
            case 2:
                printf("%d",sub(a,b));
                break;
            case 3:
                printf("%d",mul(a,b));
                break;
            case 4:
                printf("%d",div(a,b));
                break;
        }
        //int mod(a,b);
    }
    puts("Bye!");}

