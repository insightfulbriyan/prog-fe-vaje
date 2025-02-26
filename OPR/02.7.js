function collatz(n) {
    let i = 0;
    for(; n != 1; i++){
        if(n%2 == 0) n = n/2
        else n = n*3 +1;
    }

    return i
}


console.log(collatz(1));
console.log(collatz(3));
console.log(collatz(5));
console.log(collatz(27));