/*
 Purpose:     This basic program will take a censored word and a block of text, and will replace each censored word in the text with ********
 Author:      Braeden Corr
 Date:        June 22nd, 2022
*/

#include <iostream>
#include <string>
#include <vector>
#include "Functions.h"

using namespace std;

int main()
{
    //The word being censored 
    string word = "broccoli";
    string text = "Once upon a time, three little broccoli children were walking on their broccoli boulevard, when a couple of broccoli boyz came by and shaved off all of their florets (Which are highly valued on the vegetable blackmarket). The poor little broccolis run home to their broccoli mommy, and she put cotton that had been dyed green all over their heads. The little broccoli looked in the mirror, and liking what they saw, decided to take a night out on the city. While out, everybody complimented their beautifully bushy artificial florets; so much so that when the broccoli children got home, they got their mother to make enough green cotton hats for the whole town! The broccoli children went back into the city, and made enough money selling their luxurious products, that they went out and bought a M4 Sherman tank, and payed the broccoli boys a visit, before thanking them for putting all of this in motion. Then the broccoli children quickly blew up the broccoli boyz secret hideout, and took lots of pictures. The End.";

    //See which letters match the letters in the censored word
    Bleep(word, text);

    //Output each character individually
    for (int i = 0; i < text.size(); i++) {

        cout << text[i];

    }

    //Pretty little space
    cout << "\n";

}
