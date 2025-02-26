function premakni_poliomino(p, d, ver, hor) {
    for(let i = 0; i < d; i++){
        p[i][0] += ver;
        p[i][1] += hor;
    }
    
}

d = 3;
p = [[5, 2], [5, 3], [5, 4]];
premakni_poliomino(p, d, -1, -1);
console.log(JSON.stringify(p));
d = 3;
p = [[2, 3], [2, 4], [2, 5]];
premakni_poliomino(p, d, 1, 0);
console.log(JSON.stringify(p));
p = [[8, 5], [8, 6]];
d = 2;
premakni_poliomino(p, d, 0, -1);
console.log(JSON.stringify(p));