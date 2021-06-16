#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: musicPlayer
//  action 1: play music
musicPlayer.play();
//  action 2: stop music
musicPlayer.stop();
//  action 3: skip currently playing song
musicPlayer.skipSong();

//  2)
//  Noun: phone
//  action 1: read numbers inputted
phone.readInput();
//  action 2: connect to network
phone.connectNetwork();
//  action 3: transmit voice signal from the people talking
phone.transmitSignal();

//  3)
//  Noun: amplifier
//  action 1: take audio signal input
amplifier.takeInput();
//  action 2: amplifie signal
amplifier.amplify();
//  action 3: make noise
amplifier.makeNoise();
 
//  4)
//  Noun: riceCooker
//  action 1: cook rice
riceCooker.cook();
//  action 2: store rice
riceCooker.store();
//  action 3: reheat other food
riceCooker.reheat(); 
 
//  5)
//  Noun: fridge
//  action 1: cool things
fridge.cooling();
//  action 2: preserve ingredients
fridge.preserve();
//  action 3: make ice
fridge.makeIce();

//  6)
//  Noun: cow
//  action 1: make milk
cow.makeMilk();
//  action 2: say moo
cow.sayMoo();
//  action 3: eat grass
cow.eatGrass();
 
//  7)
//  Noun: nailClipper
//  action 1: cut nail
nailClipper.cutNail();
//  action 2: clean nail
nailClipper.cleanNail();
//  action 3: smooth nail
nailClipper.smoothNail();
 
//  8)
//  Noun: curtain
//  action 1: let light come inside
curtain.passLight();
//  action 2: stop light coming inside
curtain.stopLight();
//  action 3: change light color
curtain.changeLightColor();
 
//  9)
//  Noun: airplane
//  action 1: fly
airplane.fly();
//  action 2: load passengers
airplane.loadPassenger();
//  action 3: load luggages
airplane.loadLuggage();
 
//  10)
//  Noun: youtube
//  action 1: play video
youtube.playVideo();
//  action 2: recommend video
youtube.recommend();
//  action 3: play ads
youtube.playAds(); 


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
