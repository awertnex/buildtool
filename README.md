# Buildtool

**A build tool written in C99, built in C99, builds C.**
repo: [buildtool](https://github.com/awertnex/buildtool.git)

## tiny walkthrough

- copy `buildtool/` and `build.c` to your repository.
- `build.c` is the build source file and comes with a template.
- start using the functions in `buildtool/buildtool.h` (examples are at the top of that file).
- bootstrap and build project with:

```bash
gcc build.c -o build
./build
```

>**NOTES:**
>- if the function 'build_init()' is used:
>- the function 'build_init()' is important for:
>   - it willsetting the current directory to the build binary's directory (only for the process).
>   - rebuilding build source if either its file changes or it wasn't build it in C99, or if you pass the argument 'self'.
>   - parsing command line arguments:
>       - 'help': show help and exit
>       - 'show': show build command in list format
>       - 'raw': show build command in raw format
>       - 'self': re-build build source
