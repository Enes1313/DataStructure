/********************************************************************************
* DESCRIPTION : It is a handly/fastly/amazing implementation of Linked List.
* NOTES       : ToDO: eaDSLinkedListSort
* STANDARD    : C90 and up
* Author      : Enes AYDIN
********************************************************************************/

#ifndef EADSLINKEDLIST_H_
#define EADSLINKEDLIST_H_

#include <stddef.h>

/********************************************************************************
* DESCRIPTION : The data type used for a linked list.
* NOTES       : Define "eaDSLinkedList lL;" or "eaDSLinkedList lL = NULL;".
********************************************************************************/
typedef struct _eaDSLinkedList * eaDSLinkedList;

/********************************************************************************
* DESCRIPTION : Initialize the linked list with the given structure.
* INPUTS      :
*               PARAMETERS :
*                            dataCopy -> Data-specific copy function
*                            dataCompare -> Data-specific compare function
*                            dataClear -> Data-specific clear function
*               GLOBALS    : None
* OUTPUTS     :
*               PARAMETERS : None
*               GLOBALS    : None
*               RETURN     : Address from eaDSLinkedList type or NULL.
* NOTES       : All parameters are used in library.
********************************************************************************/
eaDSLinkedList eaDSLinkedListInit(void * (*dataCreateAndCopy)(const void *), int (*dataCompare)(const void *, const void *), void (*dataClear)(void *));

/********************************************************************************
* DESCRIPTION : Reset the linked list. Context of linked list is deleted.
* INPUTS      :
*               PARAMETERS :
*                            linkedList -> Address of a linked list.
*               GLOBALS    : None
* OUTPUTS     :
*               PARAMETERS : None
*               GLOBALS    : None
*               RETURN     : None
* NOTES       : This function uses clear function passed to init func.
********************************************************************************/
void eaDSLinkedListReset(eaDSLinkedList linkedList);

/********************************************************************************
* DESCRIPTION : Clear the linked list. The address must not be used later.
* INPUTS      :
*               PARAMETERS :
*                            linkedList -> Address of a linked list.
*               GLOBALS    : None
* OUTPUTS     :
*               PARAMETERS : None
*               GLOBALS    : None
*               RETURN     : None
* NOTES       : This function uses clear function passed to init func.
********************************************************************************/
void eaDSLinkedListClear(eaDSLinkedList linkedList);

/********************************************************************************
* DESCRIPTION : Sorting operation of the linked list.
* INPUTS      :
*               PARAMETERS :
*                            linkedList -> Address of a linked list.
*               GLOBALS    : None
* OUTPUTS     :
*               PARAMETERS : None
*               GLOBALS    : None
*               RETURN     : None
* NOTES       : TODO
********************************************************************************/
void eaDSLinkedListSort(eaDSLinkedList linkedList);

/********************************************************************************
* DESCRIPTION : If linked list is empty, 1 returns
* INPUTS      :
*               PARAMETERS :
*                            linkedList -> Address of a linked list.
*               GLOBALS    : None
* OUTPUTS     :
*               PARAMETERS : None
*               GLOBALS    : None
*               RETURN     : 0 or 1
* NOTES       : If "linkedList" is NULL, the function returns 1.
********************************************************************************/
int eaDSLinkedListIsEmpty(const eaDSLinkedList linkedList);

/********************************************************************************
* DESCRIPTION : Data is added to linked list.
* INPUTS      :
*               PARAMETERS :
*                            linkedList -> Address of a linked list.
*                            data -> Data address to add to the linked list.
*               GLOBALS    : None
* OUTPUTS     :
*               PARAMETERS : None
*               GLOBALS    : None
*               RETURN     : EXIT_SUCCESS or EXIT_FAILURE
* NOTES       : This function uses createandcopy functions passed to init func.
********************************************************************************/
int eaDSLinkedListAdd(eaDSLinkedList linkedList, const void * data);

/********************************************************************************
* DESCRIPTION : Data is removed from linked list.
* INPUTS      :
*               PARAMETERS :
*                            linkedList -> Address of a linked list.
*                            data -> Data address to remove from the linked list.
*               GLOBALS    : None
* OUTPUTS     :
*               PARAMETERS : None
*               GLOBALS    : None
*               RETURN     : None
* NOTES       : This function uses free function passed to init func.
********************************************************************************/
void eaDSLinkedListRemove(eaDSLinkedList linkedList, const void * data);

/********************************************************************************
* DESCRIPTION : Data is removed from index of linked list.
* INPUTS      :
*               PARAMETERS :
*                            linkedList -> Address of a linked list.
*                            index -> Index of any data in the linked list.
*               GLOBALS    : None
* OUTPUTS     :
*               PARAMETERS : None
*               GLOBALS    : None
*               RETURN     : None
* NOTES       : This function uses free function passed to init func.
********************************************************************************/
void eaDSLinkedListRemoveAt(eaDSLinkedList linkedList, size_t index);

/********************************************************************************
* DESCRIPTION : "data" param is inserted to index of linked list.
* INPUTS      :
*               PARAMETERS :
*                            linkedList -> Address of a linked list.
*                            data -> Address to insert to the linked list.
*                            index -> Index in the linked list.
*               GLOBALS    : None
* OUTPUTS     :
*               PARAMETERS : None
*               GLOBALS    : None
*               RETURN     : EXIT_SUCCESS or EXIT_FAILURE
* NOTES       : This function uses createandcopy functions passed to init func.
********************************************************************************/
int eaDSLinkedListInsert(eaDSLinkedList linkedList, const void * data, size_t index);

/********************************************************************************
* DESCRIPTION : Data in linked list is taken to "data" param.
* INPUTS      :
*               PARAMETERS :
*                            linkedList -> Address of a linked list.
*                            index -> Index in the linked list.
*               GLOBALS    : None
* OUTPUTS     :
*               PARAMETERS :
*                            data -> It is Data in index of the linked list.
*               GLOBALS    : None
*               RETURN     : Address of data or NULL
* NOTES       : This function uses createandcopy function passed to init func.
* 				You have to free the value returned from the function.
********************************************************************************/
void * eaDSLinkedListGetFrom(const eaDSLinkedList linkedList, size_t index);

/********************************************************************************
* DESCRIPTION : Address of data in linked list is return.
* INPUTS      :
*               PARAMETERS :
*                            linkedList -> Address of a linked list.
*                            index -> Index in the linked list.
*               GLOBALS    : None
* OUTPUTS     :
*               PARAMETERS : None
*               GLOBALS    : None
*               RETURN     : Address of data or NULL
* NOTES       : None
********************************************************************************/
void * eaDSLinkedListGetAddressFrom(const eaDSLinkedList linkedList, size_t index);

#endif /* EADSLINKEDLIST_H_ */
