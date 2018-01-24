#include <stdio.h>
/*
	A
*/
void o(){};
int main(){
/*
	A
*/o();char *s="#include <stdio.h>%c/*%c%cA%c*/%cvoid o(){};%cint main(){%c/*%c%cA%c*/o();char *s=%c%s%c;printf(s,10,10,9,10,10,10,10,10,9,10,34,s,34,10);return 0;}%c";printf(s,10,10,9,10,10,10,10,10,9,10,34,s,34,10);return 0;}
