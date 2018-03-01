#include <cstdio>
#include <iostream>
using namespace std;

void funcByValue(int a) {
	++a;
}

void funcByRef(int* ip) {
	//this is the tutorial method. You have to use a pointer parameter to accept a reference argument
	++(*ip);
}

void funcByRef2(int& ir) {
	//this is the other tutorial method: you can also accept a regular argument with a reference parameter.
	++ir;
}

long int factorial(long int n) {
	if (n < 2) return 1;
	return factorial(n - 1) * n;
}

long int fibonacci(long int n)
{
	if (n < 2) return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}





int main(int argc, char** argv)
{
	puts("Hello, World!");
	printf("Hello, World!\n");
	cout << "Hello, World!\n";

	cout << "MSC Version is " << _MSC_VER << "\n";

	int x, y, b;
	x = 42;
	int z = 0;
	const int a = 99;
	printf("x has value %d\n", x);
	printf("y has value %d\n", y = 42 * 42);
	printf("computed value %d\n", 42 * 42 * 42);

	//four ways to point to a variable
	int *p1;  //p is a pointer to an integer variable
	p1 = &x;  //set p to point to the address of x
	int *p2 = &x;
	int* p3 = &x;
	int*p4 = &x;
	//int p5 = &x;  --this is NOT allowed!

	//consume a pointer using a dereferencer
	b = *p1;  //b is set to the value found at *p, ie the value of x.  "Pointer dereferencer"

	//reference a variable
	int &r = x;  //r is a reference to x
	int s = x;
	printf("x has value: %d\n", x);
	printf("p1, with value %d, points to x, with value: %d\n", p1, *p1);
	printf("p2, with value %d, points to x, with value: %d\n", p2, *p2);
	printf("p3, with value %d, points to x, with value: %d\n", p3, *p3);
	printf("p4, with value %d, points to x, with value: %d\n", p4, *p4);
	printf("b should have the same value: %d\n", b);
	printf("r is a reference to x, with value: %d\n", r);
	printf("s is just set to x, and shares its value: %d\n", s);
	printf("RESET X TO 100\n");
	x = 100;
	printf("x is: %d\n", x);
	printf("b is: %d\n", b);
	printf("r is: %d\n", r);
	printf("s is: %d\n", s);

	int m = 11, n = 22;
	int &t = m;
	int *pm = &m;
	int *pn = &n;
	printf("\nBEGIN: T REFERENCES M\n");
	printf("m is: %d\n", m);
	printf("n is: %d\n", n);
	printf("t references m, with value: %d\n", t);
	printf("pm points to m at %d, returning value: %d\n", pm, *pm);
	printf("pn points to n at %d, returning value: %d\n", pn, *pn);
	printf("\nSET T=N, WHICH IS not THE SAME AS CHANGING ITS REFERENCE TO N.  \nT, AS A REFERENCE TO M, SERVES AS AN ALIAS FOR M, SO T=M IS THE SAME AS M=N \n");
	t = n;
	printf("m is: %d\n", m);
	printf("n is: %d\n", n);
	printf("t references m, with value: %d\n", t);
	printf("pm points to m at %d, returning value: %d\n", pm, *pm);
	printf("pn points to n at %d, returning value: %d\n", pn, *pn);
	printf("pn is found at %d\n", &pn);
	printf("\nSET M USING THE DEREFERNCER\n");
	*pm = 99;
	printf("m is: %d\n", m);
	printf("n is: %d\n", n);
	printf("t still references m, with value: %d\n", t);
	printf("&t is: %d\n", &t);
	printf("pm points to m at %d, returning value: %d\n", pm, *pm);
	printf("pn points to n at %d, returning value: %d\n", pn, *pn);

	printf("\nPointer Arithmetic\n");
	int i = 100;
	char c = 'c';
	int *pi = &i;
	char *pc = &c;
	printf("ip is: %d \n", pi);
	printf("Size of int is: %d \n", sizeof(int));
	printf("ip + 1 is: %d \n", pi + 1);
	printf("cp is: %d \n", pc);
	printf("Size of char is: %d \n", sizeof(char));
	printf("cp + 1 is: %d \n", pc + 1);

	//C-array
	int ia[5];
	ia[0] = 1;
	*ia = 1;  //this is equivalent to the above
	int *ip = ia;
	*ip = 2;  //this is equivalent to: ia[0] = 2
	++ip;  //now point to the next element [1], so...
	*ip = 3;  //this is equivalent to: ia[1] = 3
	*(++ip) = 4;  //increment to [2] and assign 4
	int ib[5] = { 1, 2, 3, 4, 5 };

	//c-string.  Note the null terminator is specified as '\0'
	char s1[] = { 's', 't', 'r', 'i', 'n', 'g', '\0' };
	printf("%s", s1);  //string
	cout << "\n";

	char s2[] = "string";
	printf("%s", s2);  //string
	cout << "\n";

	for (int i = 0; s1[i]; ++i) {
		printf("%c", s1[i]);
	}
	cout << "\n";

	for (char *cp = s1; *cp; ++cp) {
		printf("%c", *cp);
	}
	cout << "\n";

	for (char c : s1) {
		printf("%c", c);
	}  //this method returns the last element: as null, not 0
	cout << "\n";

	for (char c : s1) {
		if (c == '\0') break;
		printf("%c", c);
	}  // this short-circuits the last element
	cout << "\n";

	//ONE-DIMENSIONAL ARRAYS
	int A[] = { 1, 2, 3, 4 ,5 };
	printf("\n\n\nThe size of the array A is: %d \n", sizeof(A));
	printf("The size of  A[0] is: %d \n", sizeof(A[0]));
	printf("Therefore, A has %d elements. \n", sizeof(A) / sizeof(A[0]));
	printf("A is: %d\n", A);
	printf("A[0] is: %d\n", A[0]);
	printf("*A is: %d\n", *A);
	printf("&A is: %d\n", &A);
	printf("&A[0] is: %d\n\n", &A[0]);
	printf("A + 1 is: %d\n", A + 1);
	printf("A[1] is: %d\n", A[1]);
	printf("*(A + 1) is: %d\n", *(A + 1));
	printf("&A[1] is: %d\n\n\n", &A[1]);

	//MULTIDIMENSIONAL ARRAYS
	int B[3][3] = { { 1, 2, 3, }, {4, 5, 6}, {7, 8, 9} };
	printf("B is: %d\n", B);
	printf("*B is: %d\n", *B);
	printf("&B is: %d\n", &B);
	printf("B[0] is: %d\n", B[0]);
	printf("B[1] is: %d\n", B[1]);
	printf("B[1][0] is: %d\n", B[1][0]);
	printf("B[1][1] is: %d\n", B[1][1]);
	printf("*B[0] is: %d\n", *B[0]);
	printf("B + 1 is: %d\n", B + 1);
	printf("*(B + 1) is: %d\n", *(B + 1));
	printf("*B[1] is: %d\n", *B[1]);

	//calling by value and reference
	int myValue1 = 1;
	int myValue2 = 1;
	int myValue3 = 1;
	funcByValue(myValue1);
	printf("myValue started as 1.  It is now %d\n", myValue1);

	funcByRef(&myValue2);
	printf("myValue started as 1.  It is now %d\n", myValue2);

	funcByRef2(myValue3);
	printf("myValue started as 1.  It is now %d\n", myValue3);

	return 0;
}


