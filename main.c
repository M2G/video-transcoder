#include <stdio.h>
#include <stdlib.h>

static int open_input(const char *filename, inputCtx *ic) {
    int ret;

    ic->fmt_ctx = NULL;

};

static int open_decoder(InputCtx *ic) {}

int main(int argc, char *argv[]) {
    if (argc != 5) {
        fprintf(stderr, "Usage: %s <input.mp4> <output.mp4> <width> <height>\n", argv[0]);
        return 1;
    }

    const char *input_file = argv[1];
    const char *output_file = argv[2];
    int width = atoi(argv[3]);
    int height = atoi(argv[4]);

    if (width % 2 != 0 || height % 2 != 0) fprintf(stderr, "Error: width and height must be odd\n");

    return 0;
}
