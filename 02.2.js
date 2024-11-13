function je_potenca_dve(n) {
    return Number.isInteger(Math.log2(n))
}


console.log(je_potenca_dve(8));
console.log(je_potenca_dve(36));
console.log(je_potenca_dve(256));
console.log(je_potenca_dve(1));