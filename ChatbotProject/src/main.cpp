#include <stdlib.h>
#include <string>
#include "headers/io.h"
#include <iostream>

int main()
{
	system("curl https://www.scstatehouse.gov/member.php?code=279545421 > data.html");
	return 0;
}
