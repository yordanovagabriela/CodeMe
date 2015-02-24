#include<iostream>

using namespace std;

struct Complex {
	//задава стойност на m_a чрез параметъра a
	void SetRealPart(float a) {
		m_a = a;
	}
	//връща реалната част на комплексното число
	float GetRealPart() {
		return m_a;
	}
	//задава стойност на m_b чрез параметъра b
	void SetImagPart(float b) {
		m_b = b;
	}
	//връща имагинерната част на комплексното число
	float GetImagPart() {
		return m_b;
	}
	//задава стойности на m_a и m_b чрез параметрите a и b
	void SetValues(float a, float b) {
		m_a = a;
		m_b = b;
	}
	//m_a е реалната част на комплексното чило, а m_b е имагинерната 
	float m_a, m_b;
};

//събира две комплексни числа и връща комплексно число, което е резултатът от сбора им
Complex Add(Complex number1, Complex number2) {
	Complex sum;
	sum.m_a = number1.m_a + number2.m_a;
	sum.m_b = number1.m_b + number2.m_b;
	return sum;
}
//изважда две комплексни числа и връща комплексно число, което е резултатът от разликата им 
Complex Subtract(Complex number1, Complex number2) {
	Complex subtraction;
	subtraction.m_a = number1.m_a - number2.m_a;
	subtraction.m_b = number1.m_b - number2.m_b;
	return subtraction;
}
//умножава две комплексни числа и връща комплексно число,което е резултатът от произведението им 
Complex Multiply(Complex number1, Complex number2) {
	Complex multiply;
	multiply.m_a = number1.m_a*number2.m_a - number1.m_b*number2.m_b;
	multiply.m_b = number1.m_b *number2.m_a + number1.m_a *number2.m_b;
	return multiply;
}
//изкарва в конзолата комплексното число number във вида a+bi, където a е реалната част, b е 
//имагинерната част, i е символ 
void Print(Complex number) {
	if (number.m_b == 0 && number.m_a == 0) {
		cout << 0 << endl;
	}
	if (number.m_b > 0) {
		cout << number.m_a << "+" << number.m_b << "i" << endl;
	}
	else {
		cout << number.m_a << number.m_b << "i" << endl;
	}
}
int main() {
	Complex number1;
	number1.SetValues(2, 3);
	Complex number2;
	number2.SetValues(5, 6);
	Complex number3;
	number3 = Add(number1, number2);
	Print(number3); //7+9i
	number3 = Subtract(number1, number2);
	Print(number3); //‐3‐3i
	number3 = Multiply(number1, number2);
	Print(number3); //‐8+27i
	Complex number4;
	number4.SetValues(7.3, 6.5);
	Complex number5;
	number5.SetValues(2.1, 14.3);
	Complex number6;
	number6 = Multiply(number4, number5);
	Print(number6); //‐77.62+118.04i
	return 0;
}