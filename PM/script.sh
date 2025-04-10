gcc "$1" -o "${1%.c}.out" -static -lm -O1 -Werror=uninitialized


./"${1%.c}.out"