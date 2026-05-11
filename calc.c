#include <stdio.h>

void mult(void);
void div(void);
void add(void);
void sub(void);

int main(void);{
    int user;
    printf("Calculator\n");
    printf("Select an option\n");
    printf("(1) Addition\n");
    printf("(2) Subtraction\n");
    printf("(3) Multiplication\n");
    printf("(4) Division\n");
    scanf("%d" ,&userr);

    if(user == 1){
        add();
    }
    else if (user == 2){
        sub();
    }
    else if (user == 3){
        mult();
    }
    else if (user == 4){
        div();
    }
    else{
        print("Invalid option\n");
    }
}
void add(void){
    int num1;
    int num2;

    printf("What is your first number? ");
    scanf("%d", &num1);

    printf("What is your second number? ");
    scanf("%d", &num2);
    
}
