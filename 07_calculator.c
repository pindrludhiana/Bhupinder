tered by the user.

Example: Simple Calculator using switch Statement
// Performs addition, subtraction, multiplication or division depending the input from user
# include <stdio.h>
int main() {
    char operator;
    double firstNumber,secondNumber;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf",&firstNumber, &secondNumber);
    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, firstNumber + secondNumber);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber - secondNumber);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber * secondNumber);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber / secondNumber);
            break;
        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct");
    }
    
    return 0;
}

Output:

Enter an operator (+, -, *,): *
Enter two operands: 1.5
4.5
1.5 * 4.5 = 6.8
