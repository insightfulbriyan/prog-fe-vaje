function je_prastevilo(n) {
    if(n == 1) return false;

    let na_sredini = Math.floor(Math.sqrt(n));

    for (let i = 2; i <= na_sredini; i++) {
        if(n%i == 0) return false;
    }

    return true;
}


console.log(je_prastevilo(17));
console.log(je_prastevilo(323));
console.log(je_prastevilo(2));
