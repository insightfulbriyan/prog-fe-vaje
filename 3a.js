function vsota_pravih_deliteljev(n) {
    let sum = 1;
    let na_sredini = Math.ceil(Math.sqrt(n));

    for (let i = 2; i < na_sredini; i++) {
        console.log("I: ", i);
        if(n%i != 0) continue;

        sum += i + n/i;
        
    }

    return sum;
}


console.log("Test 3: ", vsota_pravih_deliteljev(3));
console.log("Test 15: ", vsota_pravih_deliteljev(15));
console.log("Test 510: ", vsota_pravih_deliteljev(510));

