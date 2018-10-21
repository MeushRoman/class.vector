#include <iostream>	

using namespace std;

class vector_
{
	int* arr;
	int size;

public:
	vector_() {
		arr = nullptr;
		size = 0;
	}

	void push_back(int number) {
		int* tmp = new int[size + 1];
		for (int i = 0; i < size; i++)
			tmp[i] = arr[i];
		tmp[size] = number;
		delete[] arr;
		arr = tmp;
		size++;
	}

	vector_(const vector_ &obj) {
		if (obj.size == 0) {
			this->arr = nullptr;
			this->size = 0;
			return;
		}
		this->arr = new int[obj.size];
		for (int i = 0; i < obj.size; i++)
		{
			this->arr[i] = obj.arr[i];
		}

		this->size = obj.size;
	}

	void print() {
		for (int i = 0; i < this->size; i++)
		{
			cout << this->arr[i] << " ";
		}
	}

	~vector_() {
		delete[]arr;
	}
};

void main() {

	vector_ v;
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);

	v.print();


	system("pause");
}