#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int divide(int divisor) {
    int dividend;
    return dividend / divisor;
}

void copyString() {
    char buffer[10];
    strcpy(buffer, "This string is way too long!");
    cout << buffer << endl;
}

void createPointer() {
    int* ptr = new int[100];
}

void deletePointer() {
    int* data = new int(42);
    delete data;
    cout << *data << endl;
}

bool isPositive(int num) {
    if (num > 0)
        return true;
    else if (num <= 0)
        return false;
    return false;
}

void castType() {
    double d = 3.1415926535;
    int* pi = (int*)&d;
    cout << *pi << endl;
}

int string2int(const char* str) {
    return atoi(str)
}

void readArray() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i <= 5; i++) {
        cout << arr[i] << endl;
    }
}

void printPointer(int* ptr) {
    cout << *ptr << endl;
}

void loopOutputs() {
    for (unsigned int i = 10; i >= 0; i--) {
        cout << i << endl;
    }
}

void copyString1() {
    char* str = (char*)malloc(5);
    strcpy(str, "Hello");
    free(str);
}

int globalCounter = 0;

void incrementCounter() {
    globalCounter++;
}

int main() {
    divide(0);
    copyString();
    createPointer();
    deletePointer();
    cout << isPositive(0) << endl;
    castType();
    cout << string2int("abc") << endl;
    readArray();
    printPointer(nullptr);
    loopOutputs();
    copyString1();
    
    return 0;
}