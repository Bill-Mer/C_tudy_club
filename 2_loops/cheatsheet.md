# for-loop; while-loop; do-while-loop; break; continue
Ό,τι μπορεί να γίνει με for-loop μπορεί να γίνει και με while-loop και αντιστρόφως.

Βασική δομή for-loop
```c
for (int i=0; i<10; i++) {
    printf("%d ", i);
}
```
```
0 1 2 3 4 5 6 7 8 9 
```

Βασική δομή while-loop
```c
int i=0;
while (i < 10) {
    printf("%d ", i);
    i++;
}
```
```
0 1 2 3 4 5 6 7 8 9 
```

Βασική δομή do-while-loop. Το σώμα της do-while εκτελείται πάντα τουλάχιστον μία φορά, ακόμη και αν δεν ισχύει η συνθήκη.
```c
int i = 1;
do {
    printf("%d ", i);
    i++;
} while(i == 10);
```
```
1
```

Η `break` τερματίζει το loop μέσα στο οποίο βρίσκεται. Εάν βρίσκεται σε περισσότερα από ένα loops, τερματίζει αυτό που ορίστηκε τελευταίο.
```c
for (int i=0; i<10; i++) {
    if (i == 5) {
        break;
    }
    printf("%d ", i);
}
```
```
0 1 2 3 4 
```

H `continue` παραλείπει μία από τις επαναλήψεις ενός loop. Σε αντίθεση με την `break`, δεν βγαίνει από το loop, αλλά συνεχίζει από την επόμενη επανάληψη.
```c
for (int i=0; i<10; i++) {
    if (i == 5) {
        continue;
    }
    printf("%d ", i);
}
```
```
0 1 2 3 4 6 7 8 9 
```

Τα loops μπορούν να εμφολεύονται το ένα στο άλλο (nested loops). Όταν ένα loop βρίσκεται μέσα σε ένα άλλο ξεκινήσει να εκτελείται, το εξωτερικό loop "παγώνει" μέχρι το εσωτερικό να ολοκληρωθεί. Το εσωτερικό loop θα εκτελεσθεί όσες φορές υποδεικνύεται από το εξωτερικό.
```c
for (int i=0; i<4; i++) {
    for (int j=0; i<2; i++) {
        printf("i: %d, j: %d\n", i, j);
    }
}
```
```
i: 0, j: 0
i: 0, j: 1
i: 1, j: 0
i: 1, j: 1
i: 2, j: 0
i: 2, j: 1
i: 3, j: 0
i: 3, j: 1
```

Ένα loop μπορεί να δουλέψει με πολλές μεταβλητές.
```c
for (int i=0, j=10; i < 10 && j > 0; i++, j--) {
    printf("%d ", i * j);
}
```
```
0 9 16 21 24 25 24 21 16 9
```

Οι μεταβλητές που αρχικοποιούνται μέσα σε ένα loop εξαφανίζονται μόλις αυτό τελειώσει.
```c
int while_index = 0;
while while_index < 10 {
    int i = 0;
    while_index++;
}
printf("%d\n", i);  // raises error
printf("%d\n", while_index);  // this works fine
```
```c
for (int i=0; i<10; i++) {
    int j = 0;
}
printf("%d\n", i);  // raises error
printf("%d\n", j);  // raises error
```
