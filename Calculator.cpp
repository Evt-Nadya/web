// Calculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

class calculator {
private: double x, y;
public:
	calculator() {
		x = 0;
		y = 0;
	}
	double get_x();
	double get_y();
	double addition(double, double);
	double subtraction(double, double);
	double multiplication(double, double);
	double division(double, double);
	double exponentation(double, double);
};
double calculator::get_x(){
	double x;
cout << "Please enter first number: " << endl;
		cin >> x;
		return x;
}
double calculator::get_y(){
	double y;
	cout << "Please enter second number: " << endl;
		cin >> y;
		return y;
}
double calculator::addition(double x, double y) {
	double ans = x + y;
	return ans;
}
double calculator::subtraction(double x, double y) {
	double ans = x - y;
	return ans;
}
double calculator::multiplication(double x, double y) {
	double ans = x * y;
	return ans;
}
double calculator::division(double x, double y) {
	if (y == 0) {
		cout << "error" << endl;
		exit(0);
	}
	double ans = x / y;
	return ans;
}
double calculator::exponentation(double x, double y) {
	double ans = pow(x,y);
	return ans;
}
int function_selection() {
	int func;
cout << "What function do you want to use? " << endl;
	cout << "1 - Addition " << endl;
	cout << "2 - Subtraction " << endl;
	cout << "3 - Multiplication " << endl;
	cout << "4 - Division " << endl;
	cout << "5-Exponentation" << endl;
	cout << "Input: " << endl;
	cin >> func;
	cout << endl;
	return func;
}

int main() {
	int func;
	double x, y;
	calculator key;
	func = function_selection();
	
	switch (func) {
	case 1:
		cout << "Addition" << endl;
		x = key.get_x();
		y = key.get_y();
		cout << x << " + " << y << " = ";
		cout << key.addition(x,y);
		break;
	case 2:
		cout << "Subtraction" << endl;
		x = key.get_x();
		y = key.get_y();
		cout << x << " - " << y << " = ";
		cout << key.subtraction(x, y);
		break;
	case 3:
		cout << "Multiplication" << endl;
		x = key.get_x();
		y = key.get_y();
		cout << x << " x " << y << " = ";
		cout << key.multiplication(x, y);
		break;
	case 4:
		cout << "Division" << endl;
		x = key.get_x();
		y = key.get_y();
		cout << x << " / " << y << " = ";
		cout << key.division(x, y);
		break;
	case 5:
		cout << "Exponentation" << endl;
		x = key.get_x();
		y = key.get_y();
		cout << x << " ^ " << y << " = ";
		cout << key.exponentation(x, y);
		break;
	default:
		cout << "Invalid Input...";
		break;
	}
}