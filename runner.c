//
// Created by sergio on 2/8/19.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "beto.h"

node_t *parse_csv() {
    FILE *stream = fopen("dataC.csv", "r");
    node_t *head = NULL;
    char buffer[255];
    while (fgets(buffer, 255, stream)) {
        char *name = (char *) calloc(8, sizeof(char));
        strcpy(name, strtok(buffer, ","));
        int age = atoi(strtok(NULL, ","));
        append(age, name, &head);
        free(name);
    }
    free(stream);
    return head;
}

