# ObfuscatedASCIIArt
Obfuscated code to draw ASCII art with a given string and shape

## Use
To change the ASCII art, edit the `output` to put the binary values of the integers where you want to have the message printed. 
For example to have a vertical line, the resultant matrix from the array will look like this:

    0 0 0 1 0 0 0 0 ...
    0 0 0 1 0 0 0 0 ...
    0 0 0 1 0 0 0 0 ...
    0 0 0 1 0 0 0 0 ...
    0 0 0 1 0 0 0 0 ...
    0 0 0 1 0 0 0 0 ...
    0 0 0 1 0 0 0 0 ...
    0 0 0 1 0 0 0 0 ...

The message to be printed is the value held by `key`. 
