#include <string>

//didn't test this but it should get a pointer to the last character, replace
//the last char with the first,
//then replace the first with the last and incrementally swap until
//there are no more to swap

void reverse(char* str){
	//get end of the string
	char *EOS = str.back()

	char c;
	while(str < EOS){
		c = *end;
		*end-- = *str;
		*str++ = c;
	}
}
