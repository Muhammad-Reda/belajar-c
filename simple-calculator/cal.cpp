#include <iostream>

/*
float calculation(float *x, char op, float *y)
{
    float result;
    switch (op)
    {
    case '+':
        return result = *x + *y;
    case '-':
        return result = *x - *y;
    case '*':
        return result = (*x) * (*y);
    case '/':
        return result = *x / *y;
    default:
        std::cout << "Wrong operator" << std::endl;
        return 0;
    }
    return 0;
}
*/
void calculation(float *x, char op, float *y, float *result)
{
    switch (op)
    {
    case '+':
        *result = *x + *y;
        break;
    case '-':
        *result = *x - *y;
        break;
    case '*':
        *result = (*x) * (*y);
        break;
    case '/':
        *result = *x / *y;
        break;
    default:
        std::cout << "Wrong operator" << std::endl;
        break;
    }
}

int main()
{
    float x, y, result;
    char op;
    std::cout << "Welcome \n";

    // Get input
    std::cout << "Input the first number \n";
    std::cin >> x;
    std::cout << "Input the operator: +, -, *, / \n";
    std::cin >> op;
    std::cout << "Input the second number: \n";
    std::cin >> y;

    /*
        if (op == '+' || op == '-' || op == '*' || op == '/')
        {
            result = calculation(&x, op, &y);
            std::cout << x << op << y << " = " << result << std::endl;
        }
        else
        {
            std::cout << "\n Wrong operator" << op << std::endl;
        }
    */

    calculation(&x, op, &y, &result);
    std::cout << x << op << y << " = " << result << std::endl;
    return 0;
}