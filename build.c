#include "buildtool.h"

int main(int argc, char **argv)
{
    if (build_init(argc, argv, "build.c", "build") != 0)
        cmd_fail(); // free resources and return error code

    cmd_push(NULL, // NULL to use internal cmd `_cmd`
            "gcc");
    cmd_push(NULL, "examples/example2_main.c");
    cmd_push(NULL, "examples/example2_util.c");
    cmd_push(NULL, "-o");
    cmd_push(NULL, "example2");
    cmd_ready(NULL);

    if (exec(&_cmd, "example2_build()._cmd") != 0)
        cmd_fail();

    cmd_free();
    return 0;
}
