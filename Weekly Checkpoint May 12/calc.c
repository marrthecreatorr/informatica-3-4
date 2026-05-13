#include <stdio.h>

void mult(void);
void div(void);
void add(void);
void sub(void);

int main(void){
    int user;
    printf("Calculator\n");
    printf("Select an option\n");
    printf("(1) Addition\n");
    printf("(2) Subtraction\n");
    printf("(3) Multiplication\n");
    printf("(4) Division\n");
    scanf("%d" ,&user);

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
        printf("Invalid option\n");
    }
}
void add(void){
    int num1;
    int num2;

    printf("What is your first number? ");
    scanf("%d", &num1);

    printf("What is your second number? ");
    scanf("%d", &num2);

    printf("%d + %d \n", num1, num2);
    printf("%d + %d = %d \n", num1, num2, num1 + num2);
}

void sub(void){
    int num1;
    int num2;

    printf("What is your first number? ");
    scanf("%d", &num1);

    printf("What is your second number? ");
    scanf("%d", &num2);

    printf("%d - %d \n", num1, num2);
    printf("%d - %d = %d \n", num1, num2, num1 - num2);
}

void mult(void){
    int num1;
    int num2;

    printf("What is your first number? ");
    scanf("%d", &num1);

    printf("What is your second number? ");
    scanf("%d", &num2);

    printf("%d * %d \n", num1, num2);
    printf("%d * %d = %d \n", num1, num2, num1 * num2);
}

void div(void){
    int num1;
    int num2;

    printf("What is your first number? ");
    scanf("%d", &num1);

    printf("What is your second number? ");
    scanf("%d", &num2);

    if(num2 == 0){
        printf("Undefined?? lol \n");
    }
    else if(num2 > 0){
        printf("%d / %d = %d \n", num1, num2, num1 / num2);
    }
    else{
        printf("idk \n");
    }
}
