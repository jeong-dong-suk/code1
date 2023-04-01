#include <stdio.h>

#define NUM_MAX_ELEMENTS (100)

int g_table[NUM_MAX_ELEMENTS];

unsigned int FNV32(const char* bytes, const int len);
void insert(unsigned int key, int data);
int find(unsigned int key);

int main(void)
{
    int data1 = 1;
    int data2 = 2;
    int data3 = 3;

    unsigned int key1 = FNV32((const char*)&data1, sizeof(int));
    unsigned int key2 = FNV32((const char*)&data2, sizeof(int));
    unsigned int key3 = FNV32((const char*)&data3, sizeof(int));

    insert(key1, data1);
    insert(key2, data2);
    insert(key3, data3);

    printf("key: %u, data: %d\n", key1, find(key1));
    printf("key: %u, data: %d\n", key2, find(key2));
    printf("key: %u, data: %d\n", key3, find(key3));

	return 0;
}

unsigned int FNV32(const char* bytes, const int len)
{
    static int FNV_PRIME_32 = 16777619U;
    static int FNV_OFFSET_32 = 2166136261U;

    unsigned int hash = FNV_OFFSET_32;
    for (int i = 0; i < len; ++i)
    {
        hash = hash * FNV_PRIME_32;
        hash = hash + bytes[i];
    }

    return hash;
}

void insert(unsigned int key, int data)
{
    g_table[key % NUM_MAX_ELEMENTS] = data;
}

int find(unsigned int key)
{
    return g_table[key % NUM_MAX_ELEMENTS];
}