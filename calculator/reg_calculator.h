#ifndef REG_CALCULATOR_H_
#define REG_CALCULATOR_H_

typedef int  (*callback)(int,int);
void reg_callback_calculator(int a,int b,callback ptr_register_callback_calculator);
#endif 
