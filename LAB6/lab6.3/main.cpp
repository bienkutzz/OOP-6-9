#include<iostream>
#include<math.h>
using namespace std;


class Complex {
private:
	double real, img;
public:
	Complex(double real = 0, double img = 0) {
		this->real =
			real; this->img = img;
	}


	Complex operator < (Complex const& obj) {
		float nr1 = sqrt(this->real * this->real + this->img * this->img);
		float nr2 = sqrt(obj.real * obj.real + obj.img * obj.img);
		Complex result;
		if (nr1 < nr2) {
			return *this;
		}

		return obj;
	}

	void display() {
		cout << this->real << " + i*" << this->img <<
			endl;
	}

};

int main()
	{
		Complex numar1(10, 5);
		Complex numar2(2, 4);
		Complex c5 = numar1 < numar2;
		c5.display();
	}
