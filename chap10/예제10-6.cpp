/*
#include <iostream>

using namespace std;

template<class T>
class MyStack {
    int tos; // top of stack
    T data[100];
public:
    MyStack();

    void push(T element); // element를 data[] 배열에 삽입
    T pop();
};

template<class T>
MyStack<T>::MyStack() { // 생성자
    tos = -1;
}

template<class T>
void MyStack<T>::push(T element) {
    if (tos == 99) {
        cout << "stack full";
        return;
    }
    tos++;
    data[tos] = element;
}

template<class T>
T MyStack<T>::pop() {
    T retData;
    if (tos == -1) {
        cout << " stack empty";
        return 0;
    }
    retData = data[tos--];
    return retData;
}

int main() {
    MyStack<int> iStack; // int만 저장하는 스택
    iStack.push(3);
    cout << iStack.pop() << endl;

    MyStack<double> dStack; // double만 저장하는 스택
    dStack.push(3.5);
    cout << dStack.pop() << endl;

    MyStack<char> *p = new MyStack<char>(); // char만 저장하는 스택
    p->push('a');
    cout << p->pop() << endl;
    delete p;

    MyStack<char> d;
    d.push('a');
    cout << d.pop() << endl;
}*/
