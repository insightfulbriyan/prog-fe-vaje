function zamenjaj_elementa(t, m, n) {
    if(m<0 || n<0 || !t[m] || !t[n]) return -1

    temp = t[m]
    t[m] = t[n]
    t[n] = temp



    return 0
    
}


t = [3, 56, 1, 8, 0];
odziv = zamenjaj_elementa(t, 0, 2);
console.log(odziv, JSON.stringify(t));
t = [23, 7, 12, 9, 728, 0];
odziv = zamenjaj_elementa(t, 4, 2);
console.log(odziv, JSON.stringify(t));
t = [3, 6, 1, 9, 0];
odziv = zamenjaj_elementa(t, 1, 2);
console.log(odziv, JSON.stringify(t));
t = [4, 7, 8, 12, 5, 0];
odziv = zamenjaj_elementa(t, 1, 6);
console.log(odziv, JSON.stringify(t));
t = [2, 1, 0];
odziv = zamenjaj_elementa(t, -2, 0);
console.log(odziv, JSON.stringify(t));
t = [1, 2, 3, 4, 5, 6, 0];
odziv = zamenjaj_elementa(t, 3, 3);
console.log(odziv, JSON.stringify(t));