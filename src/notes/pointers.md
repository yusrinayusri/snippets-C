### Pointers in C

<p>Imagine you have a treasure map. The map itself doesn't hold the treasure, but it tells you where to find it. Pointers in C are like that treasure map. They don't hold the actual treasure (the value), but they tell you where the treasure is hidden (the address in memory).

<p>Basic parts of Pointers

1. Variable (treasure chest with treasures)

```C
int treasure = 1997;
```

2. Pointer (treasure map)

```C
int *map; // map is like a treasure map that can point to a chest
```
<p>

<p>How Pointers Work

- Pointing to a variable by storing the address of the variable in the pointer

```C
map = &treasure; // &treasure is the address of the treasure chest, so map now knows where the treasure is
```

- Accessing the value by "dereferencing" the pointer

```C
printf("%d ", *map); // *map finds the treasure and shows you the gems inside (1997)
```