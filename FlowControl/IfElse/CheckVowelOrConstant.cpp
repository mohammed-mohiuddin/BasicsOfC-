// Program to check whether is vowel or consonant

#include <iostream>

using namespace std ;

int main(){
	char character;
	
	cout << "Please enter a character" << endl ;
	cin >> character ;
	character = tolower(character);
	
	bool isVowel = ( character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' );
	
	if( isVowel ){
		cout << "Entered number is a vowel" << endl ;
	}
	else{
		cout << "Entered number is consonant" << endl ;
	}
}