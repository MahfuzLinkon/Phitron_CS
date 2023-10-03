 #include <stdio.h>

//////////////////////////////////////////////// arithmetic operator ////////////////////////////////////////////////
//  double operators (int a, int b){
 int arithmeticOperators (int a, int b){
    // + operator
    int result;
    // double result;
    // result = a + b;
    // // - operator
    // result = a - b;
    // // * operator
    // result = a * b;

    // % operator
    // result = a % b;
    result = b % a;

    // // / operator
    // result = a / b;

    // // / operator
    // result = a*1.0 / b;
    return result;
 }


//////////////////////////////////////////////// Relational operators And Conditional Statement ////////////////////////////////////////////////
void conditionalStatement(){
    int amount;
    scanf("%d", &amount);

    // if (amount >= 100)
    // {
    //     printf("I will eat burger!");
    // }else if (amount >= 50)
    // {
    //     printf("I will eat fuchka!");
    // }else{
    //     printf("I will eat nothing!");
    // }

    // Nested ifElse
    if (amount >= 5000)
    {
        printf("I will go cox bazar!");
        if (amount >= 10000)
        {
            printf("\nAnd I will go Saint Martin too!");
        }else{
            printf("\nNot going Saint Martin. Going back to home!");
        }
        
    }else{
        printf("Nope, I am Low now!");
    }
}


// Main function
 int main()
 {
    // int result = operators(10, 3);
    // printf("%d", arithmeticOperators(10, 3));
    
    // Conditional Statement
    conditionalStatement();

    return 0;
    
 }