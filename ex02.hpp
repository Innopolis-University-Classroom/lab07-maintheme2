//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body
template <class T> 
class Calculator {
private:
    T num1, num2;

public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    T add() {
        return num1 + num2;
    }
    T subtract() {
        return num1 - num2;
    }
    T multiply() {
        return num1 * num2;
    }
    T divide() {
        return num1 / num2;
    }
};















