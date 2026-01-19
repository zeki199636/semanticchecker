# semanticchecker
## Description
This project implements a **semantic analysis check** to validate `switch` statements.
It ensures that:

- All `case` labels are **unique**
- Only **one `default` case** is allowed
- Any violation is reported as a **semantic error**

This type of check is performed during the **semantic analysis phase** of a compiler.

---

## Objective
To detect invalid `switch` statements by enforcing:
- No duplicate `case` values
- No multiple `default` labels

---

## How It Works
- A set is used to store all `case` labels
- Before inserting a new `case`, the checker verifies uniqueness
- A boolean flag tracks the presence of a `default` label
- Errors are reported when rules are violated

---
