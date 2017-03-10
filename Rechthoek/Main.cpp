#include "Rechthoek.h"
#include "Venstertitel.h"
#include "Venster.h"
#include "Flex_venster.h"

int main() {
	Flex_venster v(7, 25, "hoi");
	v.breder();
	v.print();


	cin.get();
	return 0;
}
