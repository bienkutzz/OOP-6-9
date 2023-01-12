#include<iostream>
using namespace std;

class Complex {
private:
	double real, img;
public:
	Complex(double real = 0, double img = 0) {
		this->real =
			real; this->img = img;
	}

	Complex operator + (Complex const& obj) {
		Complex result;
		result.real = this->real + obj.real;
		result.img = this->img + obj.img;
		return result;
	}
	void display() {
		cout << this->real << " + *i" << this->img << endl;
	}
};

int main()
{
	Complex a(20, 6);
	Complex b(15, 10);
	Complex sum = a + b;
	cout << "The sum is" << endl;
	sum.display();

}
