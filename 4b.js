function poisci_najmanjsi_element(t, i) {
    if(!t[i]) return -1;

    let min = t[i]
    for(let j = i; t[j]; j++){
        if (t[j] < min){
            min = t[j]
            i = j
        }
    }
    return i
}


t = [2, 2, 2, 2, 2, 0];
indeks = poisci_najmanjsi_element(t, 1);
console.log(indeks);
t = [34, 3, 7, 99, 9, 18, 0];
indeks = poisci_najmanjsi_element(t, 7);
console.log(indeks);
t = [3, 56, 1, 8, 0];
indeks = poisci_najmanjsi_element(t, 0);
console.log(indeks);
t = [23, 7, 12, 9, 728, 3, 13, 0];
indeks = poisci_najmanjsi_element(t, 0);
console.log(indeks);
t = [3, 6, 16, 9, 0];
indeks = poisci_najmanjsi_element(t, 0);
console.log(indeks);
t = [34, 3, 7, 99, 9, 18, 0];
indeks = poisci_najmanjsi_element(t, 2);
console.log(indeks);
t = [1, 2, 3, 55, 3, 76, 1, 3, 1, 0];
indeks = poisci_najmanjsi_element(t, 4);
console.log(indeks);
t = [1, 2, 3, 3, 3, 2, 2, 5, 0];
indeks = poisci_najmanjsi_element(t, -3);
console.log(indeks);