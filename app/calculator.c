#include <stdio.h>
#include <math.h>
void valid_operator(char operator){
    switch (operator)
    {
    case 'e':
    printf("You have left.\n");
        break;
    default:
    printf("You did not enter a valid operator\n");
        break;
    };
};
void calculate(char operator,float a, float b){
    switch (operator)
    {
        case '+':
        printf("Your result is %f\n", a+b);
            break;
        case '-':
        printf("Your result is %f\n", a-b);
            break;
        case '*':
        printf("Your result is %f\n", a*b);
            break;
        case '/':
        printf("Your result is %f\n", a/b);
            break;
        default:
        printf("That is not a valid number: %c\n", operator);
            break;
    };
}
int main(){
    char operation;
    while (operation != 'e'){
        printf("* is for multiplication\n/ is for division\n+ is for addition\n- is for subtraction\nYou can exit the program typing \"e\"\n");
        printf("Specify your operation: ");
        scanf(" %c", &operation);
        if (((int)operation<48&&(int)operation>41)&&((int)operation!=44&&(int)operation!=46)){
            float a,b;
            printf("Enter first number: ");
            scanf(" %f", &a);
            printf("Enter second number: ");
            scanf(" %f", &b);
            calculate(operation,a,b);
        } else {
            valid_operator(operation);
        };
        
    };
    system("pause");
    return 0;
};

