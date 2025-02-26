function preveri_naslednji_prostor(tetris, p, d, ver = 1, hor = 0) {
    for (let i = 0; i < d; i++) {
        if (tetris[p[i][0] + ver][p[i][1] + hor] != 1) return false;
    }

    return true;
}

function spusti_poliomino(t, p, d) {
    // if(!preveri_prostor(t, p, d)){return} //! Samo če se slučajno znajde polinoma k nima kam za pasat

    while (preveri_naslednji_prostor(t, p, d)){
        for (let i = 0; i < d; i++) {
            p[i][0] += 1;
        }
    }
}




t1 = [
    [0, 0, 0, 0, 0, 0, 0],
    [0, 1, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 1, 0],
    [0, 1, 2, 1, 1, 1, 0],
    [0, 1, 2, 1, 1, 1, 0],
    [0, 2, 2, 1, 2, 2, 0],
    [0, 0, 0, 0, 0, 0, 0]
];
d1 = 3;
p1 = [[1, 2], [1, 3], [1, 4]];
spusti_poliomino(t1, p1, d1);
console.log(JSON.stringify(p1)); //[[4, 2], [4, 3], [4, 4]]

t2 = [
    [0, 0, 0, 0, 0, 0, 0],
    [0, 1, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 2, 1, 0],
    [0, 1, 2, 2, 2, 1, 0],
    [0, 2, 2, 1, 2, 2, 0],
    [0, 0, 0, 0, 0, 0, 0]
];
d2 = 4;
p2 = [[3, 5], [4, 5], [5, 5], [6, 5]];
spusti_poliomino(t2, p2, d2);
console.log(JSON.stringify(p2)); //[[3, 5], [4, 5], [5, 5], [6, 5]]