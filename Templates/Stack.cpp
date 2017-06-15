/// friend class can access the private and protected members of the class in which it is declared as a friend.

#include<iostream>
#include <vector>
using namespace std;
template<class T> class Stack;

template <class T> Stack<T> operator+(const Stack<T> &s1,const Stack<T> &s2){
	Stack<T> result = s1;
	
	for(int i=s2.pila.size()-1;i>=0;i--){
		result.pila.push_back(s2.pila[i]);
	}
	return result ;
}

template <class T> Stack<T> operator-(const Stack<T> &s1,const Stack<T> &s2){
	Stack<T> result=s1;
	int tam = s1.pila.size()-1;
	for(tam;tam>=0;tam--){
		if(result.pila[tam]== s2.pila[tam])
			result.pila.erase(result.pila.begin()+tam);
	}
	return result ;
}

template<class T> class Stack{
private:
	vector<T> pila;
	friend Stack<T> operator+ <>( const Stack<T> &s1, const Stack<T> &s2);
	friend Stack<T> operator- <>( const Stack<T> &s1, const Stack<T> &s2);
	
public:
	void push(const T &algo){
		pila.push_back(algo);
	}
	
	void pop(){
		if(pila.empty() == 0)
			pila.pop_back();
		else
			cout<<"La pila esta vacia"<<endl;
	}
	
	T top(){
		T last = pila.back();
		return last;
	}
	
	bool empty()const{
		return pila.empty();
	}
	
	void print(){
		cout<<"Elementos del Stack: "<<endl;
		cout<< "-----"<<endl;
		for(int i=pila.size()-1;i>=0;i--){
			cout<<"| " <<pila[i]<< " |"<<endl;
			cout<< "-----"<<endl;
		}
	}
};


int main(){
	Stack<int> Enteros;
	Enteros.push(5);
	Enteros.push(6);
	Enteros.push(7);
	
	//Enteros.pop();
	Stack<int> Pila;
	Pila.push(8);
	Pila.push(6);
	Pila.push(5);

	
	Stack<int> Res = Enteros - Pila; 
	Res.print();
	//cout<<Enteros.top()<<endl;
	//Enteros.print();
	//Enteros.pop();
	
	return 0;
}
