#include "stdio.h"

int test_row_int[8] =       { 1,2,3,4,5,6,7,8 };
char test_row_char[8] =     "fuckbutt";
char test_2d_row[3][3] =    { "abc", "def", "ghi" };
char happy_face[8][8] =     { "00111100", "01000010", "10100101", "10000001", "10100101", "10011001", "01000010", "00111100" };
char neutral_face[8][8] =   { "00111100", "01000010", "10100101", "10000001", "10111101", "10000001", "01000010", "00111100" };
char sad_face[8][8] =       { "00111100", "01000010", "10100101", "10000001", "10011001", "10100101", "01000010", "00111100" };

void reverse_int_row(int* row) {
    int row_reversed[8];
    int array_step_size = 1; 
    
    for (int i = 0; i < 8; i++) {
    // for (int i = 0; i < (sizeof(*row) / sizeof(*row[0])); i++) {
        row_reversed[i] = *(row + i*array_step_size);
    }

    for (int i = 0; i < 8; i++) {
        *(row + i*array_step_size) = row_reversed[8 - i - 1] + 5;
    }
}

void reverse_char_row(char* row) {
    char row_reversed[8];
    int array_step_size = sizeof(char); 
    
    for (int i = 0; i < 8; i++) {
    // for (int i = 0; i < (sizeof(*row) / sizeof(*row[0])); i++) {
        row_reversed[i] = *(row + i*array_step_size);
    }

    for (int i = 0; i < 8; i++) {
        *(row + i*array_step_size) = row_reversed[8 - i - 1] + 5;
    }
}

void rotate_2d_array(char** rows) {
    char rotated_rows[3][3];

    for (int i = 0; i < 3; i++) {
        // each row of input
        // each col of output
        char* this_row_ptr = rows + i*sizeof(char);
        for (int j = 0; j < 3; j++) {
            // each col of input
            // each row of output
            rotated_rows[j][i] = *(this_row_ptr + j*sizeof(char));
        }

    }
}

void main() {
    // reverse_int_row(test_row_int);
    // printf("{ "); for (int i = 0; i < 8; i++) {
    //     printf("%d, ", test_row_int[i]);
    // }
    // printf("}\n");

    // reverse_char_row(test_row_char);
    // printf("{ "); for (int i = 0; i < 8; i++) {
    //     printf("%c, ", test_row_char[i]);
    // }
    // printf("}\n");

    rotate_2d_array(test_2d_row);
}