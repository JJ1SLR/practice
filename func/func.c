#include "func.h"

void init(FuncObj *self, PF pf, PF pdel) {
	self->pf = pf;
	self->pdel = pdel;
}

void doFunc(FuncObj *self) {
	if (self->pf) {
		self->pf(self);
	}
}

void deleteFuncObj(FuncObj *self) {
	if (self->pdel) {
		self->pdel(self);
	}
}

