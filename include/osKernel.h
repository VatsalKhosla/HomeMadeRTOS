/*
 * osKernel.h
 * RTOS Kernel Interface
 */

#ifndef OSKERNEL_H_
#define OSKERNEL_H_

#include <stdint.h>

/* Configurar Systick */
void osKernelLaunch(uint32_t quanta);

/* Light it up */
void osSchedulerLaunch(void);

/* A�ade los threads a la linked list y asigna el PC del stack a su thread */
uint8_t osKernelAddThreads( void(*taks0) (void),
                            void(*task1) (void),
                            void(*task2) (void),
                            void(*task3) (void));


#endif /* OSKERNEL_H_ */
