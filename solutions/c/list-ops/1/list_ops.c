#include "list_ops.h"

list_t* new_list(size_t length, list_element_t elements[])
{   
    // if (length == 0) {
    //     list_t* list = NULL;
    //     list->length = 0;
    //     return list;
    // }
    list_t* list = (list_t*)malloc(sizeof(list_t) + length * sizeof(list_element_t));
    list->length = length;
    for (size_t i = 0; i < length; i++)
    {
        list->elements[i] = elements[i];
    }
    return list;   
}

list_t* append_list(list_t *list1, list_t *list2){
    size_t new_length = list1->length + list2->length;
    list_element_t nelem[new_length];
    for (size_t i = 0; i < list1->length; i++){
        nelem[i] = list1->elements[i];
    }
    for (size_t i = 0; i < list2->length; i++){
        nelem[i+list1->length] = list2->elements[i];
    }
    list_t* nlist = new_list(new_length,nelem);
    return nlist;
}

list_t* filter_list(list_t* list, bool (*func)(list_element_t)){
    if (list == NULL) return new_list(0,NULL);
    size_t length = list->length;
    size_t count = 0;
    for (size_t i = 0; i < length; i++){
        count += func(list->elements[i]);
    }
    list_element_t nelem[count];
    size_t j = 0;
    for (size_t i = 0; i < length; i++){
        if (func(list->elements[i])){
            nelem[j++] = list->elements[i];
        }
        else continue;
    }   
    list_t* nlist = new_list(count,nelem);
    // for (size_t i = 0; i < length; i++){
    //     printf("%d, %d\n",list->elements[i],func(list->elements[i]));
    // }
    return nlist;
}

size_t length_list(list_t* list){
    return list->length;
}

list_t* map_list(list_t* list, list_element_t (*func)(list_element_t)){
    list_element_t nelem[list->length];
    for (size_t i = 0; i < list->length; i++){
        nelem[i] = func(list->elements[i]);
    }
    list_t* nlist = new_list(list->length,nelem);

    return nlist;
}

list_element_t foldl_list(list_t* list, list_element_t init, list_element_t (*func)(list_element_t, list_element_t)){
    list_element_t accum = init;
    for (size_t i = 0; i < list->length; i++){
        accum = func(list->elements[i], accum);
    }
    return accum;
}

list_element_t foldr_list(list_t* list, list_element_t init, list_element_t (*func)(list_element_t, list_element_t)){
    //if (list == NULL) return new_list(0,NULL);
    list_element_t accum = init;
    for (size_t i = 0; i < list->length; i++){
        accum = func(list->elements[list->length - 1 - i], accum);
    }
    return accum;
}

list_t* reverse_list(list_t* list){
    list_element_t nelem[list->length];
    for (size_t i = 0; i < list->length; i++){
        nelem[i] = list->elements[list->length - 1 - i];
    }
    list_t* nlist = new_list(list->length,nelem);

    return nlist;
}

void delete_list(list_t *list){
    free(list);
}
