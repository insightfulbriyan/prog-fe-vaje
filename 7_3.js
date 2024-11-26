function vstavi_poliomino(t, p, d) {
    for (let i = 0; i < d; i++) {
        t[p[i][0]][p[i][1]] = 2;
    }
}

t = [
    [0, 0, 0, 0, 0, 0, 0],
    [0, 1, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 2, 2, 0],
    [0, 2, 2, 2, 2, 1, 0],
    [0, 0, 0, 0, 0, 0, 0]
];
d = 3;
p = [[4, 1], [4, 2], [4, 3]];
vstavi_poliomino(t, p, d);
console.log(JSON.stringify(t));
t = [
    [0, 0, 0, 0, 0, 0],
    [0, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 0],
    [0, 2, 2, 2, 1, 0],
    [0, 2, 2, 1, 2, 0],
    [0, 0, 0, 0, 0, 0]
];
d = 3;
p = [[3, 2], [4, 2], [5, 2]];
vstavi_poliomino(t, p, d);
console.log(JSON.stringify(t));
t = [
    [0, 0, 0, 0, 0, 0, 0, 0],
    [0, 1, 1, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 1, 1, 0],
    [0, 1, 1, 1, 1, 2, 1, 0],
    [0, 1, 1, 1, 1, 2, 1, 0],
    [0, 2, 2, 2, 1, 2, 1, 0],
    [0, 2, 2, 1, 2, 2, 1, 0],
    [0, 0, 0, 0, 0, 0, 0, 0]
];
d = 2;
p = [[1, 1], [1, 2]];
vstavi_poliomino(t, p, d);
console.log(JSON.stringify(t));