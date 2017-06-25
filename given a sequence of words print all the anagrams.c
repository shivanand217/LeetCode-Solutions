#include<stdio.h>
#include<stdlib.b>
#include<string.h>

// for each words
struct Words
{
	char *str;
	int index;
};

// array of words
struct DupArray
{
	struct Words *array;
	int size;
};

int *compChar(const void* a, const void* b)
{
    return *(char*)a - *(char*)b;
}

int compStr(const void* a, const void* b)
{
    struct Words* a1 = (struct Words *)a;
    struct Words* b1 = (struct Words *)b;
    return strcmp(a1->str, b1->str);
}

void printAnagrams(char *s[], int size)
{
	struct DupArray*
}

int main()
{
    char *wordsArr[] = {"cat", "dog", "tac", "god", "act"};
    int size = sizeof(wordsArr)/sizeof(wordsArr[0]);
    printAnagrams(wordsArr, size);
    return 0;
}
