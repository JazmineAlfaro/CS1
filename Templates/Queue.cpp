/// friend class can access the private and protected members of the class in which it is declared as a friend.

#include<iostream>
#include <vector>
using namespace std;
template<class T> class Queue;

template <class T> Queue<T> operator+(const Queue<T> &q1,const Queue<T> &q2){
	Queue<T> result = q1;
	for(int i=0;i<q2.cola.size();i++){
		result.cola.push_back(q2.cola[i]);
	}
	return result ;
}

template <class T> Queue<T> operator-( const Queue<T> &q1, const Queue<T> &q2){
	Queue<T> result;
	int tam=q1.cola.size();
	int tam2=q2.cola.size();
	for(int i=0;i<tam;++i){
		bool p=true;
		for(int a=0;a<tam2;a++){
			if(q1.cola[i]==q2.cola[a]){
				p=false;
				break;
			}
		}
		if(p==true){
			result.push(q1.cola[i]);
		}
	}
	return result ;
}

template<class T> ostream& operator<< (ostream &output, const Queue<T> &q){
	for(int i=q.cola.size()-1;i>=0;i--){
		output <<q.cola[i] << " ";
	}
	return output;
}

template<class T> class Queue{
private:
	vector<T> cola;
	friend Queue<T> operator+ <>( const Queue<T> &q1, const Queue<T> &q2);
	friend Queue<T> operator- <>( const Queue<T> &q1, const Queue<T> &q2);
	friend ostream& operator<< <>(ostream &output, const Queue<T> &q);
public:
	void push(const T &algo){
		cola.push_back(algo);
	}
	
	void pop(){
		if(cola.empty() == 0){
			cola.erase(cola.begin());
			cout<<"Eliminando: " << cola.begin()<<endl;
		}
		else
			cout<<"La cola esta vacia"<<endl;
	}
	
	T top(){
		T first = cola.begin();
		return first;
	}
	
	bool empty()const{
		return cola.empty();
	}

};


int main(){
	Queue<int> Enteros;
	Enteros.push(5);
	Enteros.push(6);
	Enteros.push(7);
	
	//Enteros.pop();
	//cout<<Enteros;
	Queue<int> Cola;
	Cola.push(8);
	Cola.push(6);
	Cola.push(5);
	//cout<<Enteros;
	
	Queue<int> Res = Enteros - Cola; 
	cout<<Res;
	
	return 0;
}
