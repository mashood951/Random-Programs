// C++ code to find the exponential notation 
#include <bits/stdc++.h> 
using namespace std; 

// function to calculate the exponential 
// notation 
void FindExponent(char s[], int n) 
{ 
	int i, j, b, c; 
	for (i = 0; s[i] == '0' || s[i] == '.'; i++) 
		; 
	for (j = n - 1; s[j] == '0' || s[j] == '.'; j--) 
		; 

	c = find(s, s + n, '.') - s; 
	putchar(s[i]); 

	if (i != j) 
		putchar('.'); 

	for (int k = i + 1; k <= j; k++) 
		if (s[k] != '.') 
			putchar(s[k]); 
	if (i < c) 
		b = c - i - 1; 
	else
		b = c - i; 
	if (b) 
		printf("E%d", b); 
} 

// main function 
int main() 
{ 
	char s[] = "2150"; 
	int n = strlen(s);
	FindExponent(s, n);

	cout << endl;
} 
