function izlociDvojnike(tab1, tab2) {
    for (let i = 0; tab1[i] != 0; i++) {
        let i2 = 0;
        for (; tab2[i2] != 0 && tab2[i2] != tab1[i]; i2++) { }

        if (tab2[i2] == 0) { tab2.splice(i2, 0, tab1[i]); }
    }
}

t1 = [1, 2, 99, 8, 3, 3, 1, 7, 8, 0];
t2 = [0];
izlociDvojnike(t1, t2);
console.log(t2); // [1, 2, 99, 8, 3, 7, 0]

t1 = [0];
t2 = [0];
izlociDvojnike(t1, t2);
console.log(t2);// [0]
