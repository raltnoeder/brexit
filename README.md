# brexit - End your program with style
*Based on a true story*

## Description
BREXIT will stylishly end your program

## Usage
There is one header file
```
#include <brexit.h>
```

There is one function
```
void brexit(brexit_method method);
```

The parameter `method` specifies how exactly to perform the `brexit()`:
- `BECAUSE_I_CAN`  
Calls abort(), but looks way cooler than just calling abort() directly.
This is also the default if the parameter method is set to an invalid value.
- `WHAT_COULD_POSSIBLY_GO_WRONG`  
Causes an integer read from memory address 0, thereby most probably
crashing the program; but just in case that it survives, goes on
to attempt calling abort().
- `ACTUALLY_LETS_JUST_CHICKEN_OUT`  
Sends a SIGSTOP signal to the current process instead of actually terminating it,
just as the name suggests.
- `HOLD_MY_BEER_AND_WATCH_THIS`  
Performs a kamikaze stunt by sending a SIGKILL signal to the current process
to live up to the high standard usually expected after these words are heard.

Compile with
```
cc -Wall -std=c99 -I . -c brexit.c
```

Make sure to link your program with the object file
```
cc -o your_binary your_obj_1.o your_obj_2.o your_obj_n.o brexit.o
```

