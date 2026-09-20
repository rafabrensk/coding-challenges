#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TABLE_SIZE 200003

typedef struct Node {
    int value;
    struct Node* next;
} Node;

Node* table[TABLE_SIZE];

int hash(int value) {
    long long index = value % TABLE_SIZE;

    if (index < 0)
        index += TABLE_SIZE;

    return (int)index;
}

void insert(int value) {
    int index = hash(value);

    Node* current = table[index];

    while (current != NULL) {
        if (current->value == value)
            return;

        current = current->next;
    }

    Node* newNode = malloc(sizeof(Node));

    newNode->value = value;
    newNode->next = table[index];

    table[index] = newNode;
}

bool contains(int value) {
    int index = hash(value);

    Node* current = table[index];

    while (current != NULL) {
        if (current->value == value)
            return true;

        current = current->next;
    }

    return false;
}

int longestConsecutive(int* nums, int numsSize) {

    for (int i = 0; i < numsSize; i++) {
        insert(nums[i]);
    }

    int longest = 0;

    for (int i = 0; i < numsSize; i++) {

        int num = nums[i];

        if (!contains(num - 1)) {

            int current = num;
            int length = 1;

            while (contains(current + 1)) {
                current++;
                length++;
            }

            if (length > longest)
                longest = length;
        }
    }

    return longest;
}

void freeTable() {

    for (int i = 0; i < TABLE_SIZE; i++) {

        Node* current = table[i];

        while (current != NULL) {
            Node* temp = current;
            current = current->next;
            free(temp);
        }

        table[i] = NULL;
    }
}

int main() {

    int nums[] = {100, 4, 200, 1, 3, 2};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int result = longestConsecutive(nums, numsSize);

    printf("Longest consecutive sequence: %d\n", result);

    freeTable();

    return 0;
}