#include "my_stack.h"

int main()
{
    MyStack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s << endl;
    cout << s.isEmpty() << endl;
    cout << s.view() << endl;
    cout << s.pop() << endl;
    cout << s << endl;
    MyStack<int> h;
    h.push(2);
    h.push(5);
    cout << " Next one:" << endl;
    cout << h << endl;
    cout << (h == s) << endl;
    cout << " Next one:" << endl;
    MyStack<int> m(h);
    cout << m;
}