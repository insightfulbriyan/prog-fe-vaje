function brisi_poliomino(tetris) {
	for(let y = 1; !!tetris[y]; y++){
		for(let x = 1; tetris[y][x] != 0; x++){
			if(tetris[y][x] == 3) tetris[y][x] = 1;
		}
	}
}


t = [
	[0, 0, 0, 0, 0, 0, 0],
	[0, 1, 1, 1, 1, 1, 0],
	[0, 1, 1, 1, 1, 1, 0],
	[0, 3, 1, 1, 1, 1, 0],
	[0, 3, 3, 1, 1, 1, 0],
	[0, 1, 2, 1, 2, 2, 0],
	[0, 2, 2, 1, 2, 1, 0],
	[0, 0, 0, 0, 0, 0, 0]
];
brisi_poliomino(t);
console.log(JSON.stringify(t));

t = [
	[0, 0, 0, 0, 0, 0, 0],
	[0, 1, 1, 1, 1, 1, 0],
	[0, 1, 1, 3, 1, 1, 0],
	[0, 1, 3, 3, 1, 1, 0],
	[0, 1, 1, 3, 1, 1, 0],
	[0, 1, 1, 1, 1, 1, 0],
	[0, 1, 1, 1, 2, 1, 0],
	[0, 1, 2, 2, 2, 1, 0],
	[0, 2, 2, 1, 2, 2, 0],
	[0, 0, 0, 0, 0, 0, 0]
];
brisi_poliomino(t);
console.log(JSON.stringify(t));