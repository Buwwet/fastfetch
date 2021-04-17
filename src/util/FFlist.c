#include "FFlist.h"

#include <malloc.h>
#include <memory.h>

void ffListInit(FFlist* list, uint32_t elementSize)
{
    ffListInitA(list, elementSize, FF_LIST_DEFAULT_ALLOC);
}

void ffListInitA(FFlist* list, uint32_t elementSize, uint32_t capacity)
{
    list->elementSize = elementSize;
    list->capacity = capacity;
    list->length = 0;
    list->data = malloc(list->capacity * list->elementSize);
}

void* ffListGet(FFlist* list, uint32_t index)
{
    return list->data + (index * list->elementSize);
}

void* ffListAdd(FFlist* list)
{
    if(list->length == list->capacity)
        list->data = realloc(list->data, list->capacity * 2 * list->elementSize);
    void* adress = list->data + (list->length * list->elementSize);
    ++list->length;
    return adress;
}

void ffListDestroy(FFlist* list)
{
    free(list->data);
}