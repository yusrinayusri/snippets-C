### Arrow Pointer in C

<p>Imagine you have a box of crayons and each crayon has its own special box. Now, let's think about a pointer as a special map that tells us where each crayon box is.

<p> In C, when we work with something called "structures" (like a collection of different boxes, each holding different types of crayons), we use an "arrow pointer" to easily access the crayons inside those boxes.

**Basics of Structures and Pointers**

1. Structure (Box of Crayons):

A structure is like a box that can hold multiple different items (crayons).
Example: A box that holds a crayon's color and length.

2. Pointer to Structure (Map to Box):

A pointer to a structure is like a map that tells us where the box is.

**Arrow Pointer (->)**

*The arrow pointer (->) is a special tool we use when we have a map (pointer) to a box (structure) and we want to get something inside that box directly.*

<p> Summary:

1. Structure Definition:

- In C, a struct (short for "structure") is a user-defined data type that allows you to group together different types of variables under a single name. It's like a box that can hold a collection of related variables of different types. Each variable within a struct is called a member.

- We create a struct Crayon which is like our box. This box has two things inside: color and length.

2. Creating and Using the Pointer:

- We create a crayon called myCrayon with the color "Red" and length 4.5.

- We then create a pointer crayonPtr that points to our myCrayon box.

- Using the arrow pointer (->), we can easily access the color and length inside the myCrayon box using the map (crayonPtr).

3. Visualization

- Without Pointer:
If we want the color directly, we say ```myCrayon.color```

- With Pointer:
If we have the map to the box, we say ```crayonPtr->color``` to get the color.