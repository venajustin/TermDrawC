


// Starts the terminal drawing monitor thread.
// Must be called before all other termdraw functions
// returns: int 0 success, 1 failure
int starttermdraw();

// Terminates the terminal drawing monitor thread.
// Must be called before terminating host program
// returns: int 0 success, 1 failure
int endtermdraw();

// queues graphics buffer to be drawn on next frame
void flushgraphics();


// Define these functions in your files or the code will not compile.
// None of them must do anything, but you can use them to run your own code

// Keypress is called on every key event
// The int represents a character from the conio library _getch();
void keypress(int keyEvent);

// System update
// called on regular intervals
void supdate();

// Frame update
// called immediately after writing to the screen. Use for drawing graphics.
void fupdate();



