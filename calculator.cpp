#include <iostream>
#include <cmath>

using namespace std;

void basic_calc_function();
void basic_calc_printer(int answer, char operater);

class BasicCalc {

     public:
          int firstNumber;
          int secondNumber;
          char operater;

     public:
          BasicCalc(int num1, int num2, char operates) {
               firstNumber = num1;
               secondNumber = num2;
               operater = operates;
          }

          int sum() {
               return firstNumber + secondNumber;
          }

          int difference() {
               return firstNumber - secondNumber;
          }

          int product() {
               return firstNumber * secondNumber;
          }

          int quotient() {
               return firstNumber / secondNumber;
          }

};

class TrigonometryCalc {
     public:
          float angle;
          string operation;

     public:
          TrigonometryCalc (float Pangle, string Poperation){
               angle = Pangle;
               operation = Poperation;
          }

          void sin() {
               
          }

          void cosin() {
               
          }

          void tan() {
               
          }
};


int main(){

     string typeOfCalc;

     cout << "Choose kind of calculator (basic, trigonometry, logalithms) : ";
     cin >> typeOfCalc;

     if(typeOfCalc == "basic") {
          basic_calc_function();
     }else if(typeOfCalc == "trigonometry") {
          cout << "this feature is comming soon" << endl;
     }else if(typeOfCalc == "logalithms") {
          cout << "this feature is comming soon" << endl;
     }else {
          cout << "please enter valid type." << endl;
     }

}


void basic_calc_printer(int operand1, int operand2, char operater, float answer) {
     cout << operand1 << " " << operater << " "  << operand2 << " "  << "=" << "\t"  << answer;
}


void basic_calc_function() {

     int num1, num2;
     char operater;

     cout << "Enter firstNumber : ";
     cin >> num1;

     cout << "Enter secondNumber : ";
     cin >> num2;

     cout << "Enter operator (+, -, /, *) : ";
     cin >> operater;

     BasicCalc calculator(num1, num2, operater);

     switch(calculator.operater) {

          case ('+'):
               basic_calc_printer(calculator.firstNumber, calculator.secondNumber, calculator.operater, calculator.sum());
               break;
          case ('-'):
               basic_calc_printer(calculator.firstNumber, calculator.secondNumber, calculator.operater, calculator.difference());
               break;
          case ('/'):
               basic_calc_printer(calculator.firstNumber, calculator.secondNumber, calculator.operater, calculator.quotient());
               break;
          case ('*'):
               basic_calc_printer(calculator.firstNumber, calculator.secondNumber, calculator.operater, calculator.product());
               break;
          default:
               cout << "SYSTEMATIC ERROR !" << endl;
     }

}
