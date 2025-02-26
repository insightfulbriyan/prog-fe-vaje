function rotiraj_poliomino(p, d, os, rot) {
    
}

p1 = [[2, 2], [2, 3], [2, 4], [2, 5]];
rotiraj_poliomino(p1, 4, 1, -1);
console.log(JSON.stringify(p1));
[[1, 3], [2, 3], [3, 3], [4, 3]]


p2 = [[4, 4], [4, 5], [4, 6], [5, 4]];
rotiraj_poliomino(p2, 4, 0, 1);
console.log(JSON.stringify(p2));
[[4, 4], [3, 4], [2, 4], [4, 5]]


p3 = [[4, 4], [4, 5], [5, 4], [5, 5]];
rotiraj_poliomino(p3, 4, -1, 1);
console.log(JSON.stringify(p3));
[[4, 4], [4, 5], [5, 4], [5, 5]]


p4 = [[2, 6], [3, 6], [3, 7], [4, 6]];
rotiraj_poliomino(p4, 4, 1, -1);
console.log(JSON.stringify(p4));
[[3, 7], [3, 6], [4, 6], [3, 5]]