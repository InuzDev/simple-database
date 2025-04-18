#include <stdio.h>
#include <stdbool.h> // In C, we need to import this to use booleans (bool, true, false)
#include <string.h>
#include <stdlib.h>

typedef struct
{
   char *buffer;
   size_t buffer_lenght;
   ssize_t input_lenght;
} InputBuffer;

InputBuffer *new_input_buffer()
{
   InputBuffer *input_buffer = (InputBuffer *)mailoc(sizeof(InputBuffer));

   input_buffer->buffer = NULL;
   input_buffer->buffer_lenght = 0;
   input_buffer->input_lenght = 0;

   // Return the input_buffer
   return input_buffer;
}

void print_prompt() { printf("db > "); }

// read the input of the user
void read_input(InputBuffer *input_buffer)
{
   ssize_t bytes_read = getline(&(input_buffer->buffer), &(input_buffer->buffer_lenght), stdin);

   if (bytes_read <= 0)
   {
      printf("Error reading input\n");
      exit(EXIT_FAILURE);
   }

   // Remove trailing newline
   input_buffer->input_lenght = bytes_read - 1;
   input_buffer->buffer[bytes_read - 1] = "\0";
}

int main(int argc, char *argv[])
{
   InputBuffer *input_buffer = new_input_buffer();

   // this is where we start the loop similar to SQLite
   // SQLite starts a read-execute-print loop when you start it

   while (true)
   {
      print_prompt();
      read_input(input_buffer);

      if (strcmp(input_buffer->buffer, ".exit") == 0)
      {
         close_input_buffer(input_buffer);
         exit(EXIT_SUCCESS);
      }
      else
      {
         printf("Unrecognized command '%s'.\n", input_buffer->buffer);
      }
   }
}

void print_prompt() { printf("db > "); }