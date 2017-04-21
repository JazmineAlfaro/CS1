#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	return 0;
}

#1.4 Ordenamiento por mezcla
#COmpara los primeros elementos de cada lista escoger el menor y y wnviarlo al fin de la lista resultante. cuando una de las dos es vacia
#solamente falta copiarla al fin de la resultante 

def mezcla(l1,l2):
	i=0
	j=0
	res=[]
	while i<len(l1) and j<len(l2):
		if l1[i]<l2[j]:
			res.append(l1[i])
			i+=1
		else:
			res.append(l2[j])
			j+=1
			while i<len(l1):
				res.append(l1[i])
				i+=1
				while j<len(l2):
					res.append(l2[j])
					j+=1
					return res
