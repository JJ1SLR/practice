#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>

#include "func.h"
#include "disp_func.h"

static void _displayName(FuncObj *self) {
	printf("%s\n", ((DispFuncObj *)self)->name);
}

static void _delete(FuncObj *self) {
	deleteDispFuncObj((DispFuncObj *)self);
}

DispFuncObj *newDispFuncObj(void) {
	DispFuncObj *obj = (DispFuncObj *)malloc(sizeof(DispFuncObj));
	memset(obj, 0, sizeof(DispFuncObj));
	init((FuncObj *)obj, _displayName, _delete);
	strcpy(obj->name, "Mozilla");

	return obj;
}

void deleteDispFuncObj(DispFuncObj *self) {
	free(self);
}

