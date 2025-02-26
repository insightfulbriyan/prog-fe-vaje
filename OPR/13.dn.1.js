function analiza_tabele(tab, d) {
    let comp = tab[d-2]
    let flag = false;
    let result = 1;
    for(let i = 0; i < d; i++){
        if(tab[i] % 2 == 0 && tab[i] < comp){
            result *= tab[i];
            flag = true;
        }
    }

    return flag ? result : 0
}

t = [1,2,3,4,5,6,7,8,9];
r = analiza_tabele(t, 9);
console.log(r); // 48

t = [10,30,2,23,5,1,44,7,9];
r = analiza_tabele(t, 9);
console.log(r); // 2

t = [10,30,7,23,8,1,44,7,8];
r = analiza_tabele(t, 9);
console.log(r); // 0

t = [11,33,1,19,3,4,32,9,6];
r = analiza_tabele(t, 9);
console.log(r); // 24

t = [2,2,2,2,2,2,2,2];
r = analiza_tabele(t, 8);
console.log(r); // 0

t = [3,3,3,3];
r = analiza_tabele(t, 4);
console.log(r); // 0