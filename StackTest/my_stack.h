#pragma once
#include <vector>
#include <iostream>
using namespace std;
template<typename T>
class MyStack {
private:
	vector<T> mem;
public:
	MyStack() {
		;
	}
	MyStack(const MyStack& s) {
		mem = s.mem;
	}
	bool operator ==(const MyStack& s) {
		return mem == s.mem;
	}
	bool operator !=(const MyStack& s) {
		return mem != s.mem;
	}
	void push(T el) {
		mem.push_back(el);
	}
	T pop() {
		T r = mem.back();
		mem.pop_back();
		return r;
	}
	bool isFull() {
		return !mem.empty();
	}
	bool isEmpty() {
		return mem.empty();
	}
	T view() {
		return mem.back();
	}

	friend ostream& operator <<(ostream& ostr, MyStack<T>& s) {
		for (auto el : s.mem)
			ostr << el << " ";
		return ostr;
	}
};
