/*reg_callback.h*/
#ifndef REG_CALLBACK_H_
#define REG_CALLBACK_H_
typedef void (*callback)(void);
void register_callback(callback ptr_register_callback);

#endif 
