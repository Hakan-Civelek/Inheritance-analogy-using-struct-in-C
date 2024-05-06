#ifndef ORDER_H
#define ORDER_H

#include "stdio.h"
#include "stdlib.h"

struct ORDER{
    int *sayilar;
    int uzunluk;

    int* (*sirala)(struct ORDER*);
    void (*toString)(struct ORDER*);
    void (*yokEt)(struct ORDER*);
};
typedef struct ORDER* Order;

Order OrderOlustur(int sayilar[], int);
int* Sirala(const Order);
void ToString(const Order);
void OrderYoket(Order);

#endif