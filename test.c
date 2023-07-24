#include <stdio.h>
#include "ringbuffer.h"

int main() {
    RingBuffer* rb = RingBuffer_new(100);
    RingBuffer_push(rb, "Hello ", 6);
    RingBuffer_push(rb, "world!", 7);
    
    char buf[100];
    size_t len = RingBuffer_get_readable_bufsize(rb);
    RingBuffer_pop(rb, buf, len);
    printf("%s\n", buf);
    return 0;
}