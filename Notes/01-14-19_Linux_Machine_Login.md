# Basic Useful Resources #
* student_login@cs-121.cs.uidaho.edu
* 40 Useful Linux Commands
* The Pomodoro Technique for time management


# Using String Copy #
The assignment:

    string = "yolo"; // Warning here for deprecated assignment
    string[0] = '\0'; // Fails here

Sometimes fails because the pointer will often not know how to copy the contents of the pointer to the memory address. Instead we should use:

    strcpy(string, "string to copy");

The reason for this being that assignments such as the sting[0] assignment from above, is not allowed.


# Terminal History #
* sh - Bourne Shell
* bash - Bourne Again Shell
* csh - C Shell
* ksh - Korn Shell
* ssh - Secure Shell
* zsh - Z Shell

_bash_ and _ksh_ are probably the most common, although _ksh_ is less popular now. _fish_ shell is gaining popularity.

# Basic Commands #
* apropos
* man
* more
* less
* grep
* tail
* head
* cat
