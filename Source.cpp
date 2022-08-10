#include<iostream>
using namespace std;

template<class T, class S>
auto Test(T value, S value1) -> decltype(value + value1) {
	return value + value1;
}

int get() {
	return 99;
}

auto test2()->decltype(get()) {
	return get();
}

int main() {

	auto value = 7;
	auto text = "hello";

	cout << Test(5, 6) << endl << test2() << endl;
	return 0;
}