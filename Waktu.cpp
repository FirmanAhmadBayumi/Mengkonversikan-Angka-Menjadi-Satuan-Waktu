#include <iostream>
using namespace std;

int main() {
    int sec,jam,menit,detik;
    
    printf (""); scanf ("%d",&sec);
    jam = sec / (60*60);
    sec = sec - ((60*60)*jam);
    menit = sec/60;
    sec = sec - (60*menit);
        printf ("%d jam %d menit %d detik", jam, menit, sec);
    return 0;
}