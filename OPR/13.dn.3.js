function najdiZadnjega(t, e) {
    let i = 0;
    for(; t[i] != 0; i++){}
    for(; t[i] != e && i != -1; i--){}

    return i
}



r = najdiZadnjega([1,2,3,1,0],1);
console.log(r); // 3

r = najdiZadnjega([1,2,3,1,0],5);
console.log(r); // -1