/*
	p
*/
const co = () => /*
	p
*/console.log(f());const f = () => "/*\n\tp\n*/\nconst co = () => /*\n\tp\n*/console.log(f());const f = " + f + ";co();";co();
