#include <stdio.h>
#include <stdlib.h>
#include "linkedlist/linkedlist.h"
#include "stack/stack.h"

void decimalToBinary(int decimal) {
    Node* linkedList = NULL; // Linked List
    Stack* stack = createStack(64); // Stack dengan kapasitas 32
    
    // Konversi Desimal ke Biner menggunakan stack
    while (decimal > 0) {
        int remainder = decimal % 2;
        push(stack, remainder);
        decimal /= 2;
    }
    
    // Pindahkan elemen dari stack ke linked list
    while (!isEmpty(stack)) {
        appendNode(&linkedList, pop(stack));
    }
    
    // Tampilkan hasil Linked List
    printf("Hasil konversi ke biner dalam bentuk Linked List:\n");
    displayLinkedList(linkedList);

    // Bebaskan memori yang digunakan
    free(stack->data);
    free(stack);
}

int main() {
    int decimalNumber;
    printf("Masukkan bilangan desimal: ");
    scanf("%d", &decimalNumber);
    
    decimalToBinary(decimalNumber);
    getchar();
    getchar();

    return 0;
}