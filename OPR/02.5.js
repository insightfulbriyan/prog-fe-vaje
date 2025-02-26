function fibonacci(n) {
    if(n < 1) return -1;
    if(n < 3) return 1;

    return fibonacci(n -2) + fibonacci(n-1)
}


console.log(fibonacci(0));
console.log(fibonacci(2));
console.log(fibonacci(10));
console.log(fibonacci(17));