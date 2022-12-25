#include "../headers/stringList.h"

int TestFunc(char ***list){
    StringListAdd(list, "Hi");
}
int main(){
    size_t test_n = 0;
    char **list;
    StringListInit(&list);
    printf("********Test %i*********\n", test_n++);
    StringListAdd(&list, "Hello");
    StringListSort(&list);
    StringListPrint(&list);
    printf("********Test %i*********\n", test_n++);
    StringListAdd(&list, "Hello1");
    StringListAdd(&list, "Hello");
    StringListAdd(&list, "Hello234");
    StringListPrint(&list);
    printf("********Test %i*********\n", test_n++);
    StringListSort(&list);
    StringListPrint(&list);
    printf("********Test %i*********\n", test_n++);
    StringListRemove(&list, "Hello234");
    StringListPrint(&list);
    printf("********Test %i*********\n", test_n++);
    printf("%i\n", StringListSize(&list));
    printf("********Test %i*********\n", test_n++);
    printf("%i\n", StringListIndexOf(&list, "Hello"));
    printf("%i\n", StringListIndexOf(&list, "random"));
    printf("********Test %i*********\n", test_n++);
    StringListRemoveDuplicates(&list);
    StringListPrint(&list);
    // StringListReplaceInStrings(&list, "World", "Hello");
    // StringListRemoveDuplicates(&list);
    // StringListAdd(&list, NULL);
    // StringListIndexOf(&list, NULL);  
    // StringListSize(&list);
    // StringListRemove(&list, "Check");
    // StringListRemove(&list, NULL);
    // StringListSort(&list);
    // StringListPrint(&list);
    // printf("*************************\n");
    
    // printf("%i\n",StringListIndexOf(&list, NULL));
    // StringListPrint(&list);
    // printf("%i\n",StringListSize(&list));
    // printf("*************************\n");

    // TestFunc(&list);
    // StringListPrint(&list);
    // StringListDestroy(&list);
    // StringListAdd(&list, "Hello ");
    // TestFunc(&list);
    // StringListAdd(&list, "World");
    // StringListAdd(&list, "!");
    // StringListDestroy(&list);
    // StringListPrint(&list);
    // printf("*************************\n");
    // StringListRemove(&list, "!");
    // StringListPrint(&list);
    // printf("*************************\n");
    // StringListRemove(&list, "Hello ");
    // StringListPrint(&list);
    // printf("*************************\n");
    // StringListRemove(&list, "World");
    // StringListPrint(&list);
    // printf("*************************\n");
    // StringListRemove(&list, "Hi");
    // StringListPrint(&list);
    // printf("*************************\n");
   StringListDestroy(&list);
   return 0; 
}