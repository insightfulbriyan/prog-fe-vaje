function collatz(n) {
    let max = n;
    while(n != 1){
        if(n%2 == 0) n = n/2
        else n = n*3 +1;

        if(n> max) max = n;
    }

    return max
}


console.log(collatz(1));
console.log(collatz(3));
console.log(collatz(5));
console.log(collatz(25));
console.log(collatz(16));