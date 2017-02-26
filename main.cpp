#include <iostream>
using namespace std;

class Array {
	int *p;
	int size;
public:
	Array(int a) {
		size = a;
		p = new int[a];
	}
	void set(int index, int value){
		if((index < size) && (index >= 0)) {
			p[index] = value;
		} else {
		cout << "Wrong Index" << endl;}
	}
	int get(int index) {
		if((index < size) && (index >= 0)) {
			return p[index];
		} else {
		cout << "Wrong Index" << endl; 
		exit(-1);
		}
	}
	~Array() { delete [] p;  }
	
	Array (const Array & b)
	{
		size = b.size;
		p = new int [size];
	}
	
};


int main()
{
	Array m(7);
	for(int i=0; i<7; i++){
		m.set(i,i+1);
	}
	for(int i=0; i<7; i++){
		cout << m.get(i) << endl;
	}
	cout << endl;
	Array n(m);
	
	for(int i=0; i<7; i++){
		n.set(i,i+1);
	}
	for(int i=0; i<7; i++){
		cout << n.get(i) << endl;
	}
}
