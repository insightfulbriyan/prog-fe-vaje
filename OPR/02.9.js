function vsota_deliteljev(n) {
    let sum = 1

    for(let i = 2; i < Math.sqrt(n); i++){
        if(n%i == 0) {
            sum += i + n/i
        }
    }

    return sum
}

function oblno_stevlo(n) {
    let i = n;
    while(i >= vsota_deliteljev(i)) i++;
    return i
}


console.log(oblno_stevlo(1));
console.log(oblno_stevlo(17));
console.log(oblno_stevlo(42));
console.log(oblno_stevlo(21));