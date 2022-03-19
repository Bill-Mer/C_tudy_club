# boolean values; if statements; switch case; ?: operator
Οι λογικές τιμές που υπάρχουν στην C είναι οι true και false. Όμως, επειδή στη βασική βιβλιοθήκη δεν υπάρχουν τα keywords `true` και `false`,
αυτά αναπαριστώνται με 1 και 0 αντίστοιχα.

Εάν η συνθήκη σε μια if είναι true:
```c
if (1) {
    printf("the statement is true\n");
} else {
    printf("the statement is false\n");
}
```
```
the statement is true
```
Ενώ αν η συνθήκη είναι false:
```c
if (0) {
    printf("the statement is true\n");
} else {
    printf("the statement is false\n");
}
```
```
the statement is false
```
Ωστόσο, οποιαδήποτε μη μηδενική τιμή θεωρείται true.
```c
if (0.7) {
    printf("the statement is true\n");
} else {
    printf("the statement is false\n");
}
```
```
the statement is true
```
Στη συνθήκη της if μπορεί να εισαχθεί ένας λογικός έλεγχος. Οι κύριοι τελεστές είναι οι: `==`, `!=`, `<`, `>`.
```c
if (3 > 4) {
    printf("the statement is true\n");
} else {
    printf("the statement is false\n");
}
```
```
the statement is false
```
Για να εισαχθούν περισσότεροι από έναν θα πρέπει να ενώνονται με έναν έναν από τους τελεστές `||` ή `&&` (υπάρχουν και άλλοι, αλλά αυτοί είναι οι κύριοι).
```c
if (2 < 5 || 6 == 7) {  // checks whether at least one of the statements is true
    printf("the statement is true\n");
} else {
    printf("the statement is false\n");
}
```
```
the statement is true
```
```c
if (2 < 5 && 6 == 7) {  // checks whether EVERY one of the statements is true
    printf("the statement is true\n");
} else {
    printf("the statement is false\n");
}
```
```
the statement is false
```
Μπορούν να χρησιμοποιηθούν συνεχόμενα περισσότερες από μια if statements με τη χρήση της `else if`. Όταν χρησιμοποιείται η `else` ή η `else if`, σημαίνει
ότι θα εκτελεστεί αυστηρώς μόνο ένα από τα περιέχόμενα των if (δηλαδή, στο παρακάτω παράδειγμα θα εκτελεστεί ή το σώμα του πρώτου `if`, ή το σώμα του
`else if`, ή το σώμα του `else`).
```c
if (9 < 6) {
    printf("the first statement is true\n");
} else if (3 == 3) {
    printf("the second statement is true\n");
} else {
    printf("all of the statements are false\n");
}
```
```
the second statement is true
```
