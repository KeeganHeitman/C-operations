int main(){
    char op;
    double first,second;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operators: ");
    scanf("%lf %lf", &first, &second);
    
    switch(op){
        case '+':
            printf("%.1lf + %.1lf = %.1lf", first, second, first+second);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", first, second, first-second);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", first, second, first*second);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf", first, second, first/second);
            break;
        default:
            printf("Error 1: incorrect operand");
    }
    return 0;
}