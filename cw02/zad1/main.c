#include "sys.c"
#include "std.c"

int main(int argc, char** argv) {
  if (strcmp(argv[1], "generate") == 0) {
    int word_count = atoi(argv[3]);
    int word_size = atoi(argv[4]);
    generate(argv[2], word_count, word_size);
  }

  else if (strcmp(argv[1], "sort") == 0) {
    char* file = argv[2];
    int word_count = atoi(argv[3]);
    int word_size = atoi(argv[4]);
    bool use_sys = strcmp(arg(5, "sys"), "sys") == 0;

    if (use_sys) sort_sys(file, word_count, word_size);
    else sort_c(file, word_count, word_size);
  }

  else if (strcmp(argv[1], "copy") == 0) {
    char* source = argv[2];
    char* target = argv[3];

    int word_count = atoi(argv[4]);
    buffer_size = atoi(arg(5, "512"));
    bool use_sys = strcmp(arg(6, "sys"), "sys") == 0;
    buffer = malloc(buffer_size * sizeof(char));

    if (use_sys) copy_sys(source, target, word_count);
    else copy_c(source, target, word_count);
  } 
}