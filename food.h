#ifndef FOOD_H
#define FOOD_H

#include "snake.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "raylib.h"

typedef enum {
    FOOD_1P = 2,
    FOOD_2P = 3,
} FOOD_TYPE;

extern FOOD* food_list;

typedef struct food_node {
    int x, y;
    FOOD_TYPE type;
    struct food_node* next; 
} FOOD;


void spawn_food_1p(SNAKE* snake, int* x, int* y);
void spawn_food_2p(SNAKE* snake, int* x, int* y);
int is_position_occupied(SNAKE* snake, int x, int y);
int check_food(int x, int y, int* grow_value);
void spawn_food_random_points(SNAKE* snake);
void generate_food(SNAKE* snake);
void draw_food();   

#endif