function prva_ponovitev(t) {
    let i = 0

    seen = []
    for(; t[i] != -1; i++){
        if(seen.includes(t[i])) return i;
        seen = seen.concat(t[i])
    }

    return -1
}



console.log(prva_ponovitev([1, 2, 3, 4, 5, 2, -1]));
console.log(prva_ponovitev([6, 8, 1, 4, 33, 9, 8, 6, -1]));
console.log(prva_ponovitev([12, 12, 12, 12, -1]));
console.log(prva_ponovitev([4, -1]));
console.log(prva_ponovitev([-1]));