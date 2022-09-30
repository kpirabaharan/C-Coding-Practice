//extern int i;

// dont have to specify size again
// extern char text[];

void foo (){
    // or since we just need i for the scope of this fn
    extern int i;
    i = 100;
}