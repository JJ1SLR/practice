#ifndef FUNC_H_
#define FUNC_H_

typedef struct FuncObj_tag {
	void (*pf)(struct FuncObj_tag *);
	void (*pdel)(struct FuncObj_tag *);
} FuncObj;	

typedef void (*PF)(FuncObj *);

extern void init(FuncObj *self, PF pf, PF pdel);

extern void doFunc(FuncObj *self);

// Destructor
extern void deleteFuncObj(FuncObj *self);

#endif /* FUNC_H_ */

