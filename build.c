#include "buildtool/buildtool.h"

int main(int argc, char **argv)
{
    if (build_init(argc, argv, "build.c", "build") != ERR_SUCCESS)
        cmd_fail();

    cmd_exec(7,
            COMPILER,
            "file1.c",
            "file2.c",
            "-Wall",
            "-Wextra",
            "-o",
            "output_file");
    return 0;
}
