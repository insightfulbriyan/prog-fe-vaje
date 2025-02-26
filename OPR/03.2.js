function preveri_podatke(t, n) {
    let sum = 0
    for(let i = 0; i < n - 1; i++){
        sum += t[i] * (i%2 + 1)
    }

    return sum%10 == t[n - 1]
}


console.log(preveri_podatke([2, 5, 1, 7, 2, 9], 6));
console.log(preveri_podatke([2, 2, 3, 4, 8], 5));
console.log(preveri_podatke([2, 2], 2));
console.log(preveri_podatke([8, 8, 1, 2, 3, 1, 4], 7));