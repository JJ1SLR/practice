#include <stddef.h>

#include "func.h"
#include "disp_func.h"

int main() {
	FuncObj *obj = (FuncObj *)newDispFuncObj();
	doFunc(obj);
	deleteFuncObj(obj);
	obj = NULL;

	return 0;
}

