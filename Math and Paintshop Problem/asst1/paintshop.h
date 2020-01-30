/*
 * **********************************************************************
 * You are free to add anything you think you require to this file
*/

#include "paintshop_driver.h"

#ifndef _PAINTSHOP_H_
#define _PAINTSHOP_H_

#endif


int customers;

// customer label binary semaphores for accessing critical region
struct semaphore *sem_order_paint, *sem_get_service;

// stuff label binary semaphores for accessing critical region
struct semaphore *sem_get_order, *sem_serve_paint, *sem_fill_order, *sem_get_tints[NCOLOURS + 2];

// counting semaphores for controlling access to full or empty buffer
struct semaphore *sem_empty_order_buffer, *sem_full_order_buffer;
struct semaphore *sem_empty_serve_buffer, *sem_full_serve_buffer;


// buffers
struct paint_can *order_buffer[NCUSTOMERS];
void *serve_buffer[NCUSTOMERS];

