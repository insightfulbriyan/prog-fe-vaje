function vsota(a, b) {
    if (a > b) return -1;

    let sum = 0;

    while (a <= b) sum += a++;
    
    return sum;
}


console.log(vsota(-2, 2));
console.log(vsota(2, 7));
console.log(vsota(-5, -5));
console.log(vsota(7, 6));
console.log(vsota(-3, -7));