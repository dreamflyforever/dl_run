gcc libstr.c -fPIC --share -o libstr.so
gcc main.c -ldl -g
