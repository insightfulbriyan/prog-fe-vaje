function je_popolno_stevilo(n) {
    let sum = 1

    for(let i = 2; i < Math.sqrt(n); i++){
        if(n%i == 0) {
            sum += i + n/i
        }
    }

    return sum == n
}


console.log(je_popolno_stevilo(6));
console.log(je_popolno_stevilo(8128));
console.log(je_popolno_stevilo(56));