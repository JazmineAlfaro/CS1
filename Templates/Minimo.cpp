/// preprocessor: separate step in the compilation process,pre-processing before the actual compilation

/// #define	 -> Substitutes a preprocessor macro.
/// #include -> Inserts a particular header from another file.

/// macros: Object-like   ->  #define <identifier> <replacement token list>
///         Function-like ->  #define <identifier>(<parameter list>) <replacement token list>

#include <iostream>
#define mini(a,b) (a<b?a:b)

using namespace std;

template <typename T>

T minimo(T a, T b){
    if(a<b)
        return a;
    else
        return b;
}


int main()
{
   	cout << "  "<<minimo<int>(8,5)<<endl;
	cout << minimo<float>(20,16) << endl;
	cout << minimo<char>('x','d') << endl;

	cout << "Preprocessor macros: " << endl;
	cout << mini(6,5) << endl;
	cout << mini(0.3,0.5) << '\n';
	cout << mini('x','d') << endl;

	return 0;
}

