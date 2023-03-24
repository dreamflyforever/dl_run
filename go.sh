gcc libstr.c -fPIC --shared -o libstr.so
gcc main.c -ldl -g
