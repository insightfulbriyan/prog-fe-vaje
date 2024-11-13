function poisci_najvecji_element(t, i) {
    if(!t[i]) return -1;

    let max = t[i]
    for(let j = i; t[j]; j++){
        if (t[j] >  max){
            max = t[j]
            i = j
        }
    }
    return i
}


t = [3, 56, 1, 8, 0];
indeks = poisci_najvecji_element(t, 0);
console.log(indeks);
t = [23, 7, 12, 9, 728, 3, 13, 0];
indeks = poisci_najvecji_element(t, 0);
console.log(indeks);
t = [3, 6, 16, 9, 0];
indeks = poisci_najvecji_element(t, 0);
console.log(indeks);
t = [134, 3, 7, 99, 9, 18, 0];
indeks = poisci_najvecji_element(t, 3);
console.log(indeks);
t = [1, 2, 3, 55, 3, 76, 1, 3, 76, 0];
indeks = poisci_najvecji_element(t, 4);
console.log(indeks);
t = [2, 2, 2, 2, 2, 0];
indeks = poisci_najvecji_element(t, 1);
console.log(indeks);
t = [1, 2, 3, 4, 5, 0];
indeks = poisci_najvecji_element(t, -2);
console.log(indeks);
t = [1, 2, 3, 3, 3, 2, 2, 3, 0];
indeks = poisci_najvecji_element(t, 8);
console.log(indeks);