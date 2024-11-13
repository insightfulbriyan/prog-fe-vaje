function uredi(t, smer) {
    let sorted = [0]

    for(let i = 0; t[i] != 0; i++){
        let j = 0
        for(; sorted[j] !=0 && smer * sorted[j] < smer * t[i]; j++ ){}
        sorted.splice(j, 0, t[i])
    }

    for(let i = 0; t[i] != 0; i++){
        t[i] = sorted[i]
    }
    return 0
}

t = [0];
uredi(t, 1);
console.log(JSON.stringify(t));
t = [1, 2, 3, 4, 5, 6, 0];
uredi(t, 1);
console.log(JSON.stringify(t));
t = [19, 4, 12, 54, 7, 239, 33, 7, 0];
uredi(t, 1);
console.log(JSON.stringify(t));
t = [42, 0];
uredi(t, -1);
console.log(JSON.stringify(t));
t = [2, 2, 45, 23, 2, 6, 45, 1, 0];
uredi(t, -1);
console.log(JSON.stringify(t));