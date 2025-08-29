#include <stdlib.h>
#include <stdio.h>

int dpi_getchar() {
    FILE *pipe = popen("python3 get_char_zenity.py", "r");
    if (!pipe) return 24;
    int c = fgetc(pipe);
    pclose(pipe);
    return (c == EOF ? 24 : c);
}
