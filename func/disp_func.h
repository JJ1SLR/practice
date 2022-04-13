#ifndef DISP_FUNC_H_
#define DISP_FUNC_H_

#include "func.h"

typedef struct DispFuncObj_tag {
	FuncObj base;
	char name[64];
} DispFuncObj;

// Constructor
extern DispFuncObj *newDispFuncObj(void);

// Destructor
extern void deleteDispFuncObj(DispFuncObj *self);

#endif /* DISP_FUNC_H_ */

