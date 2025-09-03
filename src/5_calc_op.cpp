#include <iostream>
using namespace std;
float Multiply(float a, float b)
{
    return a * b;
}
float Divide(float a, float b)
{
    return a / b;
}
float Add(float a, float b)
{
    return a +b;
}
float Subtract(float a, float b)
{
    return a -b;
}
int main(){
float num1;
float num2;
char operation;
cout << "enter first number: \n";
cin >> num1;
cout << "enter second number: \n";
cin >> num2;
cout << "enter operation (+, -, *, /):";
cin >> operation;
switch(operation){
case '+':
cout << Add(num1, num2);
break;
case '-':
cout << Subtract(num1, num2);
break;
case '*':
cout << Multiply(num1, num2);
break;
case '/':
if (num2 == 0){
cout << "Error, CANNOT DIVIDE BY ZERO\n";
} else {
 cout << Divide(num1, num2);
 break;
default:
cout << "Invalid operator";
}




}
}

