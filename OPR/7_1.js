function preveri_prostor(tetris, p, d) {
    for(let i = 0; i < d; i++){
        if(tetris[p[i][0]][p[i][1]] != 1) return false;
    }
    
    return true;
}


t = [
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
d = 3;
p = [[5, 2], [5, 3], [5, 4]];
console.log(preveri_prostor(t, p, d));
t = [
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
d = 3;
p = [[2, 3], [2, 4], [2, 5]];
console.log(preveri_prostor(t, p, d));
t = [
    [0, 0, 0, 0, 0, 0, 0, 0],
    [0, 1, 1, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 1, 1, 0],
    [0, 1, 2, 2, 2, 1, 1, 0],
    [0, 2, 2, 1, 2, 2, 2, 0],
    [0, 0, 0, 0, 0, 0, 0, 0]
];
p = [[8, 5], [8, 6]];
d = 2;
console.log(preveri_prostor(t, p, d));
t = [
    [0, 0, 0, 0, 0, 0],
    [0, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 0],
    [0, 2, 2, 1, 2, 0],
    [0, 0, 0, 0, 0, 0]
];
p = [[1, 1], [1, 2], [1, 3], [0, 2]];
d = 4;
console.log(preveri_prostor(t, p, d));