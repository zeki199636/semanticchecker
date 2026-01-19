#Given Grammar
E → E + T | T
T → T * F | F
F → (E) | id


#This grammar has left recursion, which must be removed for top-down parsing.

Removing Left Recursion
Step 1: Eliminate left recursion from E
E  → T E'
E' → + T E' | ε

Step 2: Eliminate left recursion from T
T  → F T'
T' → * F T' | ε

Step 3: F remains unchanged
F → (E) | id

#Final Grammar (Left-Recursion Free)
E  → T E'
E' → + T E' | ε
T  → F T'
T' → * F T' | ε
F  → (E) | id
