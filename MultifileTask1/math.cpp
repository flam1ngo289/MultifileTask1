#include "math.hpp"

int sum(int &a, int &b){
    return a + b;
}

int sub(int &a, int &b){
    return a - b;
}

int multyply(int &a, int &b){
    return a * b;
}

int division(int &a, int &b){
    return a / b;
}

int pow(int &a, int &b){
    int result = 1;
    if (b ==0) {
        result = 1;
    }
    else {
        for (int i = 0; i <= b;i++)
        {
            result = result * a;
        }
    }
    return result;
}
