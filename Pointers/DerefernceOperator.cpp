/* Note: * used in the declaration is not a dereference operator.
It is used to declare a pointer. Assumption, variable internal structure
<variable name> ----> <memory location> -----> <content of variable or value>. 
Accessing <variable name> directly gives content/value. We can create a 
variable to store <memory location>. It is called pointer. Steps involved in
using a pointer:
1. Declare a pointer of some type, e.g int *p ;. Here * is not dereferencing
operator.
2. Assign some address to the pointer. It can be done using reference(&) operator
e.g int *p, v ; 
	p = &v ;
3. Get the contents of the pointer using dereference operator(*).
e.g int *p, v ;
	p = &v ;
	v = 10 ;
	cout << *p ; gives 10. */

#include <iostream>
using namespace std ;

int main(){
	//declare integer pointer and variable
	int *p, v ;
	
	//Store address of variable v in integer pointer p
	p = &v ;
	
	//Store value 10 in v
	v = 10 ;
	
	/*since p points to memory location of v.
	using deference operator *, we can get the content/value 
	stored in variable v */
	cout << *p ;
}

/* Output:
---------------------------------
10
--------------------------------- */